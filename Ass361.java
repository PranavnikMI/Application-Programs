import java.util.*;

class Ass361
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
        char ch = 'A';
        for(int i = 1; i <= iRow; i++)
        {
            ch = 'A';
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
        }
    }
}