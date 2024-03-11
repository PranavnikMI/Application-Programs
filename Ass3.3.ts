
class Circle
{
    public Radius : number;
    public PI : number;

    public constructor(A : number)
    {
        this.Radius = A;
        this.PI = 3.14;
    }

    public Area() : number
    {
        let Area : number = 0;
        Area = this.PI * this.Radius * this.Radius;
        return Area;
    }
}

class CircleX extends Circle
{
    public constructor(A : number)
    {
        super(A);
    }

    public Circumferance() : number
    {
        let Circumferance : number = 0;
        Circumferance = 2 * this.PI * this.Radius;
        return Circumferance;
    }
}

var obj1 = new CircleX(10);
var obj2 = new CircleX(20);
var Ret : number = 0;

Ret = obj1.Area();
console.log("Area of obj1 is : "+Ret);

Ret = obj1.Circumferance();
console.log("Circumferance of obj1 is : "+Ret);

Ret = obj2.Area();
console.log("Area of obj2 is : "+Ret);

Ret = obj2.Circumferance();
console.log("Circumferance of obj2 is : "+Ret);