import java.util.*;

class Ass401
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Rows :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Column :");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.DisplayPattern(iNo1,iNo2);
    }
}

class Pattern
{
    public void DisplayPattern(int iRow, int iCol)
    {
        for(int i = iRow; i >= 1; i--)
        {
            for(int j =  1; j <= iCol; j++)
            {
                
                if((i == 1) || (i == iRow) || (j == 1) || (j == iCol) || (i == j))
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}
