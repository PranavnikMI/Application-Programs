import java.util.*;

class Ass435
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Student Number :");
        int iValue = sobj.nextInt();

        System.out.println("Enter Student Marks :");
        double Arr[] = new double[iValue];

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextDouble();
        }

        System.out.println("Marks of Student is :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();

        ArrayX aobj = new ArrayX();
        aobj.DisplayClass(Arr);
    }
}

class ArrayX
{
    public void DisplayClass(double Brr[])
    {
        System.out.println("Student Result is :");
        for(int i = 0; i < Brr.length; i++)
        {
            if(Brr[i] <= 35)
            {
                System.out.println(Brr[i]+"\tFail");
            }
            if(Brr[i] > 35 && Brr[i] <= 50)
            {
                System.out.println(Brr[i]+"\tPass Class");
            }
            if(Brr[i] > 50 && Brr[i] <= 60)
            {
                System.out.println(Brr[i]+"\tSecond Class");
            }    
            if(Brr[i] > 60 && Brr[i] <= 70)
            {
                System.out.println(Brr[i]+"\tFirst Class");
            }
            if(Brr[i] > 70 && Brr[i] <= 100)
            {
                System.out.println(Brr[i]+"\tFirst class with distintion");
            }
        }
    }
}