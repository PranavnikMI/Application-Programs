import java.util.*;

class Ass311
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX xobj = new StringX();

        int iRet = xobj.CapitalCharCount(str);
        System.out.println("Given String Contain "+iRet+" Capital Charecter");
    }
}

class StringX
{
    public int CapitalCharCount(String s)
    {
        int iCnt = 0, i = 0;
        for(i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}