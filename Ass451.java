import java.util.*;

class Ass451
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Strinng : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String : ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        boolean bRet = obj.CheckString(str1,str2);
        if(bRet == true)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}

class StringX
{   
    public boolean CheckString(String s1, String s2)
    {
        int iCnt = 0;
        boolean Flag = false;
        char Arr[] = new char[s1.length()];
        char Brr[] = new char[s2.length()];

        Arr = s1.toCharArray();
        Brr = s2.toCharArray();

        if(Arr.length != Brr.length)
        {
            return Flag;
        }

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <Brr.length; j++)
            {
                if(Arr[i] == Brr[j] && j == iCnt)
                {
                    if(j == Brr.length - 1)
                    {
                        iCnt = -1;
                    }
                    Flag = true;
                    break;
                }
                else
                {
                    if(i == 0)
                    {
                        iCnt++;
                    }
                    Flag = false;
                }
            }
            iCnt++;
            if(Flag != true)
            {
                break;
            }
        }
        return Flag;
    }
}