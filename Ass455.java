import java.util.*;

class Ass452
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();

        boolean bRet = obj.CheckParenthesised(str);
        if(bRet== true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}

class StringX
{
    public boolean CheckParenthesised(String s)
    {
        char Arr[] = new char[s.length()];
        Arr = s.toCharArray();
        int RCnt = 0, LCnt = 0;

        for(int i = 0; i < Arr.length ; i++)
        {
            if(Arr[i] == '(')
            {
                RCnt++;
            }
            else if(Arr[i] == ')')
            {
                LCnt++;
            }
            else
            {

            }
        }
        
        if(RCnt == LCnt)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
