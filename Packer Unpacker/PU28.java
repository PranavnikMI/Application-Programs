import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class PU28
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);

        int iMax = 0, MaxIndex = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                MaxIndex = i;
            }
        }

        System.out.println("Largest word from the string is : "+Arr[MaxIndex]+" with the length : "+iMax);
    } 
}   