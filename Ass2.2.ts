
function Summation(Arr : number[]) : number
{
    let Cnt : number = 0;
    let Sum : number = 0;

    for(Cnt = 0; Cnt < Arr.length; Cnt++)
    {
        Sum = Sum + Arr[Cnt];
    }
    return Sum;
}

var Sum : number[] = new Array(7);
Sum = [23,6,7,4,5,7];

var Ret : number = 0;

Ret = Summation(Sum);
console.log("Summation is : "+Ret);