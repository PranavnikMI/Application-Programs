
function Area(Radius : number, PI ?: number) : number
{
    let Ans : number = 0;

    if(PI == undefined)
    {
        PI = 3.14;
    }

    Ans = PI * Radius * Radius;

    return Ans;
}

var Ret : number = 0;

Ret = Area(5);
console.log("Area of Circle is : "+Ret);