
// Default parameter

function Area(Rad : number, PI : number = 3.14) : number
{
    let Ans : number = 0;

    Ans = PI * Rad *Rad;

    return Ans;
}

var Ret : number = 0;

Ret = Area(20.3,3.14);
console.log("Area is : "+Ret);

Ret = Area(20.3);
console.log("Area is : "+Ret);

Ret = Area(20.3,7.12);
console.log("Area is : "+Ret);