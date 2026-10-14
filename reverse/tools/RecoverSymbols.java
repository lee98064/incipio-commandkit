// Restore surviving ELF32/MIPS dynamic function names before Ghidra analysis.
// @category Incipio
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.data.*;
import java.nio.file.*;
import java.util.*;

public class RecoverSymbols extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csv = args[0];
        int count = 0;
        if (csv.equals("raw")) {
            Address start = toAddr(0x80400408L);
            if (!currentProgram.getMemory().contains(toAddr(0x8040ee40L)))
                currentProgram.getMemory().createUninitializedBlock("boot_bss", toAddr(0x8040ee40L), 0x140b4L, false);
            currentProgram.getProgramContext().setValue(currentProgram.getRegister("gp"),
                currentProgram.getMinAddress(), toAddr(0x80422ef3L), java.math.BigInteger.valueOf(0x80420ef4L));
            disassemble(start);
            createFunction(start, "boot_entry");
            long[] addresses = {0x80407aa8L,0x80407f78L,0x80408028L,0x80408140L,
                                0x804082d4L,0x804084bcL,0x804086b0L,0x80407ce4L,0x80407e24L};
            String[] names = {"normalize_bankmark","probe_kernel_header","find_bank_header",
                              "validate_rootfs","validate_kernel_image","check_image_header",
                              "select_boot_bank","publish_boot_bank","jump_to_kernel"};
            for (int i = 0; i < addresses.length; i++) {
                Address a = toAddr(addresses[i]); disassemble(a);
                Function f = getFunctionAt(a);
                if (f == null) f = createFunction(a, names[i]);
                if (f != null) {
                    f.setName(names[i], SourceType.USER_DEFINED);
                    if (i <= 6) f.setReturnType(UnsignedIntegerDataType.dataType,SourceType.USER_DEFINED);
                    if (i == 0) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("found",IntegerDataType.dataType,currentProgram),
                        new ParameterImpl("header",PointerDataType.dataType,currentProgram));
                    if (i == 5) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("header",PointerDataType.dataType,currentProgram),
                        new ParameterImpl("scratch",PointerDataType.dataType,currentProgram),
                        new ParameterImpl("bank_offset",UnsignedIntegerDataType.dataType,currentProgram));
                    if (i == 1 || i == 4) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("flash_address",UnsignedIntegerDataType.dataType,currentProgram),
                        new ParameterImpl("header",PointerDataType.dataType,currentProgram));
                    if (i == 2) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("header",PointerDataType.dataType,currentProgram),
                        new ParameterImpl("bank_offset",UnsignedIntegerDataType.dataType,currentProgram),
                        new ParameterImpl("where",PointerDataType.dataType,currentProgram));
                    if (i == 3) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("flash_address",UnsignedIntegerDataType.dataType,currentProgram));
                    if (i == 6) f.replaceParameters(Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
                        true,SourceType.USER_DEFINED,
                        new ParameterImpl("full_validation",IntegerDataType.dataType,currentProgram));
                    count++;
                }
            }
        } else {
            for (String line : Files.readAllLines(Path.of(csv))) {
                if (line.startsWith("index,")) continue;
                String[] c = line.split(",",7);
                if (c.length < 7 || !c[4].equals("2") || c[5].equals("0")) continue;
                long va = Long.decode(c[1]); long size = Long.parseLong(c[2]);
                if (va == 0 || size == 0) continue;
                Address a = toAddr(va);
                if (!currentProgram.getMemory().contains(a)) continue;
                String name = c[6].replaceAll("[^A-Za-z0-9_.$@]", "_");
                try {
                    disassemble(a);
                    Function f = getFunctionAt(a);
                    if (f == null) f = currentProgram.getFunctionManager().createFunction(
                        name, a, new AddressSet(a,a.add(size-1)), SourceType.USER_DEFINED);
                    else f.setName(name,SourceType.USER_DEFINED);
                    count++;
                } catch (Exception e) { println("symbol " + name + " at " + a + ": " + e); }
            }
        }
        println("Recovered functions: " + count);
    }
}
