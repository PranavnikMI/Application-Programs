import java.io.*;

class BufferedInput
{
     public static void main(String arg[]) throws IOException
     {
          InputStreamReader iobj = new InputStreamReader(System.in);
          BufferedReader bobj = new BufferedReader(iobj);
          String name = null;
          int Age = 0; 
          float marks = 0.0f;
     
          System.out.println("Enter Your Name : ");
          name = bobj.readLine();

          System.out.println("Enter your Age : ");
          Age = Integer.parseInt(bobj.readLine());

          System.out.println("Enter your Marks : ");
          marks = Float.parseFloat(bobj.readLine());
          
          System.out.println("Name : "+name);
          System.out.println("Age : "+Age);
          System.out.println("Marks : "+marks);
     }
}

