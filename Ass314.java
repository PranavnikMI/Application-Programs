import java.util.*;

class Ass314
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX xobj = new StringX();

        boolean bRet = xobj.CheakVowel(str);
        if(bRet == true)
        {
            System.out.println("String Contain Vowel");
        }
        else
        {
            System.out.println("String not Contain Vowel");
        }
        
    }
}

class StringX
{
    public boolean CheakVowel(String s)
    {
        int i = 0;
        boolean bRet = false;

        for(i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' || s.charAt(i) == 'U' || s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
            {
                bRet = true;
            }
        }
        return bRet;
    }
}