
function Area(Radius : number, PI : number = 3.14) : number
{
    let Area : number = 0;
    Area = PI*Radius*Radius;
    return Area;
}

var Ret : number = 0;

Ret = Area(5);
console.log("Area of Circle is : "+Ret);