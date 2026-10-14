// Correct known soft-float and tail-call return types; preserve original recovered names.
// @category Incipio
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.data.*;
import ghidra.program.model.symbol.SourceType;

public class CorrectTypes extends GhidraScript {
    private void prototype(Function f, DataType result, DataType[] types, String[] names) throws Exception {
        if (f == null) return;
        Parameter[] parameters=new Parameter[types.length];
        for (int i=0;i<types.length;i++) parameters[i]=new ParameterImpl(names[i],types[i],currentProgram);
        f.updateFunction(null,new ReturnParameterImpl(result,currentProgram),
            java.util.Arrays.asList(parameters),Function.FunctionUpdateType.DYNAMIC_STORAGE_ALL_PARAMS,
            true,SourceType.USER_DEFINED);
    }
    public void run() throws Exception {
        String name=currentProgram.getName();
        long[] addresses=new long[0];
        if (name.equals("homekitserver")) {
            if (getFunctionAt(toAddr(0x00432b94L)) != null && getFunctionAt(toAddr(0x00432b94L)).getName().equals("meterHandlerInit"))
                addresses=new long[]{0x004329dcL,0x00432a70L,0x00432b04L,0x00433b80L,0x00433e48L,0x00434110L};
            else addresses=new long[]{0x004328b8L,0x00432a68L,0x00432c18L};
            for(long address:addresses) {
                Function f=getFunctionAt(toAddr(address));
                if(f!=null) {
                    // Vendor uses soft-float: return IEEE754 bits in v0, not f0.
                    ReturnParameterImpl ret=new ReturnParameterImpl(FloatDataType.dataType,
                        new VariableStorage(currentProgram,currentProgram.getRegister("v0")),currentProgram);
                    f.updateFunction(null,ret,java.util.Arrays.asList(f.getParameters()),
                        Function.FunctionUpdateType.CUSTOM_STORAGE,true,SourceType.USER_DEFINED);
                }
            }
        }
        if(name.equals("upgfw")) {
            long address=getScriptArgs()[0].equals("530000")?0x0041344cL:0x0041335cL;
            Function f=getFunctionAt(toAddr(address));
            DataType bytes=new PointerDataType(ByteDataType.dataType);
            DataType opaque=new PointerDataType(VoidDataType.dataType);
            // a0/a1 are saved into s0/s1; a2 goes to the PEM reader; a3 is saved
            // on the stack then supplied as RSA output. Verified in both banks.
            prototype(f,IntegerDataType.dataType,
                new DataType[]{bytes,IntegerDataType.dataType,bytes,bytes},
                new String[]{"ciphertext","ciphertext_length","public_key_pem","plaintext"});
            prototype(getFunctionAt(toAddr(address-0xacL)),opaque,
                new DataType[]{bytes,IntegerDataType.dataType},new String[]{"pem","public_key"});
            FunctionIterator functions=currentProgram.getFunctionManager().getFunctions(true);
            while(functions.hasNext()) {
                Function crypto=functions.next();
                if(crypto.getName().equals("RSA_public_decrypt"))
                    prototype(crypto,IntegerDataType.dataType,
                        new DataType[]{IntegerDataType.dataType,bytes,bytes,opaque,IntegerDataType.dataType},
                        new String[]{"length","from","to","rsa","padding"});
            }
        }
    }
}
