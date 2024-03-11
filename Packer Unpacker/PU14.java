import java.io.*;
import java.util.*;

class PU14
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
                File allfiles[] = fobj.listFiles();
                System.out.println("Number of files are : "+allfiles.length);
                
                System.out.println("File names are : ");
                for(int i = 0; i < allfiles.length; i++)
                {
                    System.out.println("File name : "+allfiles[i].getName()+" Size : "+allfiles[i].length());
                }
            }
            else
            {
                System.out.println("There is no duch folder..");
            }

        }
        catch(Exception obj)
        {
            System.out.println("Exception occurd : "+obj);
        }
    }
}