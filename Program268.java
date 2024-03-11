// Accept string From user and count Number of Character
import java.util.*;

class Program268
{
    public static void main(String Ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        System.out.println("Number of characters are : "+str.length());
    }
}