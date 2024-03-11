
function Maximum(...Arr : number[]) : number
{
    var Cnt : number = 0;
    var Max : number = 0;

    for(Cnt = 0; Cnt < Arr.length; Cnt++)
    {
        if(Arr[Cnt] > Max)
        {
            Max = Arr[Cnt];
        }
    }
    return Max;
}

var Ret : number = Maximum(23,89,6);
console.log("Maximum number is : "+Ret);