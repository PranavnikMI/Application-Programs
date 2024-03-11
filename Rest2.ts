// Rest Parameter : Variable number of argument 

//function Addition(Arr : number[]) : number
function Addition(...Arr : number[]) : number
{
    let Sum : number = 0;
    let Cnt : number = 0;

    for(Cnt = 0; Cnt < Arr.length; Cnt++)
    {
        Sum = Sum +Arr[Cnt];
    }
    return Sum;
}

var Ret : number = 0;
var Mydata : number[] = [10,20,30,40];


// Ret = Addition(Mydata);

Ret = Addition(10,20,30,40);
console.log("Result is : "+Ret);