class StaticDemo
{   
    static
    {
        System.out.println("Inside Static block of StaticDemo class which contains main");
    }
    public static void main(String arg[]) 
    {
        System.out.println("Inside main");

        System.out.println("Value of static No3 : "+Demo.No3);      //Demo::No3
        System.out.println("Value of static No4 : "+Demo.No4);      //Demo::No3
        Demo.gun();         //Demo::gun()
        
        Demo obj1 = new Demo();
        Demo obj2 = new Demo();
        
        obj1.fun();
        obj1.gun();
    }
}

class Demo
{
    public int No1;                     //non static characteristics
    public int No2;                     //non static characteristics
    public static int No3;              //static characteristics
    public static int No4;              //static characteristics

    static                              //static block
    {
        System.out.println("Inside static block");
        No3 = 51;
        No4 = 101;
    }
    public Demo()                   //constructor
    {
        System.out.println("Inside Constructor");
        No1 = 11;
        No2 = 21;
    }
    public void fun()                   //non static method
    {
        // Non static method can access non static as well as static data
        // we can use this keyword
        System.out.println("Inside Non static method fun");
        System.out.println("Value of static No1 : "+this.No1); 
        System.out.println("Value of static No2 : "+this.No2); 
        System.out.println("Value of static No3 : "+this.No3);      
        System.out.println("Value of static No4 : "+this.No4);
    }
    public static void gun()                   //satic method
    {
        // static method can access only static data
        // we can not use this keyword
        System.out.println("Inside static method gun");
        System.out.println("Value of static No3 : "+No3); 
        System.out.println("Value of static No4 : "+No4);
    }
}
