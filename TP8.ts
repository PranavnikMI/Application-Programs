
function Maximum(...Arr : number[]) : number
{
    let Cnt : number = 0;
    let Max : number = 0;

   while(Cnt < Arr.length)
   {
        if(Arr[Cnt] > Max)
        {
            Max = Arr[Cnt];
        }
        Cnt++;
   }
   return Max;
}

var Ret : number = 0;

Ret = Maximum(23,89,6);
console.log("Maximum number is : "+Ret);