import java.util.Scanner;

class ArrayUser
{
    
    public static void main(String Arg[])
    {
        int iCnt = 0;
        int iSum = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Number of element in the Array are :"+Arr.length);

        System.out.println("Enter the element in array : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {       
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("element of the array are : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {       
            System.out.println(Arr[iCnt]);
        }

        System.out.println("Addition of the array is : ");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {       
            iSum = iSum + Arr[iCnt];
        }


        System.out.println("Addition is :"+iSum);

           
    }
}