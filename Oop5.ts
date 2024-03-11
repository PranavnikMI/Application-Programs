
class Circle
{
    Radius : number;
    PI : number;

    constructor(Data : number)
    {
        this.Radius = Data;
        this.PI = 3.14;
    }

    CalculateArea() : number
    {
        let Ans : number = 0;
        Ans = this.PI * this.Radius * this.Radius;
        return Ans;
    }
}

class CircleX extends Circle
{
    constructor(Data : number)
    {
        super(Data);
    }

    CalculateCircumferance(): number 
    {
        let Ans : number = 0;
        Ans = 2 * this.PI * this.Radius;
        return Ans;
    }
}

var Ret : number = 0;

var obj = new CircleX(10.7);

Ret = obj.CalculateArea();
console.log("Area is : "+Ret);

Ret = obj.CalculateCircumferance();
console.log("Circumferance is : "+Ret);