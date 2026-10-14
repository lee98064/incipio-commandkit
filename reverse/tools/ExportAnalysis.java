// Export actual Ghidra pseudo-C, per-function assembly, call edges and string XREFs.
// @category Incipio
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;

public class ExportAnalysis extends GhidraScript {
    public void run() throws Exception {
        Path dest = Path.of(getScriptArgs()[0]);
        Files.createDirectories(dest.resolve("functions"));
        String name = currentProgram.getName();
        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true); decompiler.toggleSyntaxTree(false);
        decompiler.openProgram(currentProgram);
        int attempted=0, succeeded=0;
        try (PrintWriter combined = new PrintWriter(Files.newBufferedWriter(dest.resolve(name+".c")));
             PrintWriter index = new PrintWriter(Files.newBufferedWriter(dest.resolve("functions.tsv")));
             PrintWriter calls = new PrintWriter(Files.newBufferedWriter(dest.resolve("calls.tsv")));
             PrintWriter refs = new PrintWriter(Files.newBufferedWriter(dest.resolve("string_xrefs.tsv")))) {
            combined.println("/* Ghidra-generated pseudo-C; not original source or a buildable project. */");
            index.println("address\tname\tbytes\tstatus\tfile");
            calls.println("caller\tcallsite\tcallee_address\tcallee");
            refs.println("function\tfrom\tstring_address\tstring");
            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function f = functions.next();
                if (f.isExternal() || f.isThunk()) continue;
                long va = f.getEntryPoint().getOffset();
                boolean library = (name.equals("homekitserver") && va >= 0x00440000L) ||
                                  (name.equals("upgfw") && va >= 0x00416000L);
                if (library && !Set.of("RSA_verify","RSA_public_decrypt","PEM_read_bio_RSA_PUBKEY",
                                      "SHA256","SHA256_Update","SHA256_Final").contains(f.getName())) continue;
                attempted++;
                String stem = f.getEntryPoint()+"_"+f.getName().replaceAll("[^A-Za-z0-9_.-]","_");
                DecompileResults result = decompiler.decompileFunction(f, 30, monitor);
                String status = result.decompileCompleted() ? "ok" : result.getErrorMessage().replace('\t',' ').replace('\n',' ');
                index.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses()+"\t"+status+"\tfunctions/"+stem+".c");
                if (result.decompileCompleted()) {
                    succeeded++;
                    String c = "/* " + f.getName() + " @ " + f.getEntryPoint() + " */\n" + result.getDecompiledFunction().getC();
                    Files.writeString(dest.resolve("functions/"+stem+".c"),c);
                    combined.println(c);
                }
                StringBuilder asm = new StringBuilder("# "+f.getName()+" @ "+f.getEntryPoint()+"\n");
                InstructionIterator instructions = currentProgram.getListing().getInstructions(f.getBody(),true);
                while (instructions.hasNext()) {
                    Instruction ins = instructions.next();
                    asm.append(ins.getAddress()+"  "+ins+"\n");
                    for (Reference ref : ins.getReferencesFrom()) {
                        if (ref.getReferenceType().isCall()) {
                            Function callee = getFunctionAt(ref.getToAddress());
                            calls.println(f.getName()+"\t"+ins.getAddress()+"\t"+ref.getToAddress()+"\t"+(callee==null?"?":callee.getName()));
                        }
                        Data datum = getDataAt(ref.getToAddress());
                        if (datum != null && datum.hasStringValue()) refs.println(f.getName()+"\t"+ins.getAddress()+"\t"+ref.getToAddress()+"\t"+String.valueOf(datum.getValue()).replace('\n',' ').replace('\t',' '));
                    }
                }
                Files.writeString(dest.resolve("functions/"+stem+".s"),asm.toString());
            }
        }
        String summary = "program="+name+"\nlanguage="+currentProgram.getLanguageID()+"\ncompiler="+currentProgram.getCompilerSpec().getCompilerSpecID()+"\nimage_base="+currentProgram.getImageBase()+"\nattempted="+attempted+"\nsucceeded="+succeeded+"\n";
        Files.writeString(dest.resolve("summary.txt"),summary);
        println(summary); decompiler.dispose();
    }
}
