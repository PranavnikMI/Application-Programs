
function SecondMax(Arr : number[]) : number
{
    let Max : number = 0;
    let Cnt : number = 0;
    let Ans : number = 0;

    for(Cnt = 0; Cnt < Arr.length; Cnt++)
    {
        if(Arr[Cnt] > Max)
        {
            Ans = Max;
            Max = Arr[Cnt];
        }
        else
        {
            if(Arr[Cnt] > Ans)
            {
                Ans = Arr[Cnt];
            }
        }
    }
    return Ans;
}

var SM : number[] = new Array(8);
SM = [23,89,6,29,56,45,77,32];

var Ret : number = 0;

Ret = SecondMax(SM);
console.log("Second Maximum number is : "+Ret);