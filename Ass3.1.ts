
class Arithmetic
{
    public Number1 : number;
    public Number2 : number;
    
    public constructor(A : number, B : number)
    {
        this.Number1 = A;
        this.Number2 = B;
    }

    public Add() : number
    {
        return this.Number1 + this.Number2;
    }

    public Sub() : number
    {
        return this.Number1 - this.Number2;
    }

    public Multi() : number
    {
        return this.Number1 * this.Number2;
    }

    public Div() : number
    {
        return this.Number1 / this.Number2;
    }
}

var obj1 = new Arithmetic(10,20);
var obj2 = new Arithmetic(50,100);
var Ret : number = 0;

Ret = obj1.Add();
console.log("Addition of obj1 is : "+Ret);

Ret = obj1.Sub();
console.log("Subtraction of obj1 is : "+Ret);

Ret = obj1.Multi();
console.log("Multiplication of obj1 is : "+Ret);

Ret = obj1.Div();
console.log("Division of obj1 is : "+Ret);

Ret = obj2.Add();
console.log("Addition of obj2 is : "+Ret);

Ret = obj2.Sub();
console.log("Subtraction of obj2 is : "+Ret);

Ret = obj2.Multi();
console.log("Multiplication of obj2 is : "+Ret);

Ret = obj2.Div();
console.log("Division of obj2 is : "+Ret);
