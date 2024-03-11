function Addition(No1 : number, No2 : number) : number
{
    let Ans : number = 0;
    Ans = No1 + No2;
    return Ans;
}

function Substraction(No1 : number, No2 : number) : number
{
    let Ans : number = 0;
    Ans = No1 - No2;
    return Ans;
}

var A : number = 11;
var B : number = 10;
var Ret : number = 0;

Ret = Addition(A,B);
console.log("Addition is : "+Ret);

Ret = Substraction(A,B);
console.log("Substraction is : "+Ret);