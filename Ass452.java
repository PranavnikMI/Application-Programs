import java.util.*;

class Ass452
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string :");
        String str = sobj.nextLine();

        StringX obj = new StringX();
        obj.CheckOccurance(str);
    }
}

class StringX
{
    public void CheckOccurance(String s)
    {
        char Arr[] = new char[s.length()];
        char Brr[] = new char[s.length()];
        char Crr[] = new char[s.length()];
        Arr = s.toCharArray();
        Brr = s.toCharArray();
        int iCnt = 0, k = 0, m = 0;

        for(int i = 0; i < Arr.length ; i++)
        {
            if(i == Arr.length - 1)
            {
                Crr[k] = Arr[i];
                k++;
            }
            if(Arr[i] == ' '|| i == Arr.length - 1)
            {
                for(int j = 0; j < Brr.length; j++)
                {
                    while(Brr[j] == Crr[m])
                    {
                        m++;
                        j++;
                        if(m == k)
                        {
                            iCnt++;
                            break;
                        }
                        if(j == Brr.length)
                        {
                            break;
                        }    
                    }
                    m = 0;
                    
                    if(j == Brr.length - 1 || j == Brr.length)
                    {
                        for(int f = 0; f < k; f++)
                        {
                            System.out.print(Crr[f]);
                        }
                        System.out.println("\t"+iCnt);
                        iCnt = 0;
                        k = 0;
                    }    
                }
            }
            else
            {
                Crr[k] = Arr[i];
                k++;
            }
        }

    }
}
