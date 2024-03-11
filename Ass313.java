import java.util.*;

class Ass313
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        StringX xobj = new StringX();

        int iRet = xobj.DiffSmallCapCharCount(str);
        System.out.println("Difference B/W small and Large Capital Count is : "+iRet);
    }
}

class StringX
{
    public int DiffSmallCapCharCount(String s)
    {
        int iCCnt = 0, iSCnt = 0, i = 0;
        for(i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z')
            {
                iCCnt++;
            }
            else
            {
                iSCnt++;
            }
        }
        return iSCnt - iCCnt;
    }
}