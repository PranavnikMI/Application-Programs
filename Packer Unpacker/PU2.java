import java.util.*;
import java.io.*;

class PU2
{
    public static void main(String Ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter File name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        fobj.createNewFile();
    }
}