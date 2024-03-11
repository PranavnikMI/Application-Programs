
function Maximum(Arr : number[]) : number
{
    let Cnt : number = 0;
    let Max : number = Arr[0];

    for(Cnt = 0; Cnt < Arr.length; Cnt++)
    {
        if(Arr[Cnt]  > Max)
        {
            Max = Arr[Cnt];
        }
    }

    return Max;
}


var Maxi : number[] = [29,89,6,29,56,45,77,32];
var Ret : number = 0;

Ret = Maximum(Maxi);
console.log("Maximum number in Array is : "+Ret);