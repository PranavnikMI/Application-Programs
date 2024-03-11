import java.util.*;

class Ass312
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX xobj = new StringX();

        int iRet = xobj.SmallCharCount(str);
        System.out.println("Given String Contain "+iRet+" Small Charecter");
    }
}

class StringX
{
    public int SmallCharCount(String s)
    {
        int iCnt = 0, i = 0;
        for(i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) >= 'a' && s.charAt(i) <= 'z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}