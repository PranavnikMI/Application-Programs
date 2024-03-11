import java.io.*;
import java.util.*;

class PU11
{
    public static void main(String Arr[]) 
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();

            File fobj = new File(FolderName);

            if(fobj.exists())
            {

            }
            else
            {
                System.out.println("There is no such folder..");
            }

        }
        catch(Exception obj)
        {
            System.out.println("Exception occurd : "+obj);
        }
    }
}