import java.io.*;

class CreateFile
{
    public static void main(String arg[]) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("ABC.txt");

        String Data = "ABC Infosystem Pune";

        byte bdata[] = Data.getBytes();

        fobj.write(bdata);
        fobj.close();
    }
}