import java.util.*;

class Ass362
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Rows Number :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the Column Number :");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iNo1,iNo2);
    }
}

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        char ch1 = 'A';
        char ch2 = 'a';
        for(int i = 1; i <= iRow; i++)
        {
            ch1 = 'A';
            ch2 = 'a'; 
            for(int j = 1; j <= iCol; j++)
            {
                if(i % 2 != 0)
                {
                    System.out.print(ch1+"\t");
                    ch1++;
                }
                else
                {
                    System.out.print(ch2+"\t");
                    ch2++;
                }
            }
            System.out.println();
        }
    }
}