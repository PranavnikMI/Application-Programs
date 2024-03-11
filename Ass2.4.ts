
function ChkAmstrong(No : number) : boolean
{
    let Value : number = No;
    let Temp : number = No;
    let Cnt : number = 0;
    let Ans : number = 0;
    let Falg : boolean = false;
    let REM : number = 0;
    let Sum : number = 1;
    let Counter : number = 0;

    while(Value != 0)
    {
        Value = Math.floor(Value/10);
        Cnt++;
    }

    while(Temp != 0)
    {
        REM = Temp % 10
        while(Counter < Cnt)
        {
            Sum = Sum * REM;
            Counter++;
        }
        Ans = Ans + Sum;
        Temp = Math.floor(Temp/10);
        Sum = 1;
        Counter = 0;
    }

    if(No == Ans)
    {
        Falg = true;
    }

    return Falg;
}

var Ret : boolean = false;

Ret = ChkAmstrong(153);
if(Ret == true)
{
    console.log("It is Amstrong Number");
}
else
{
    console.log("It is not Amstrong Number");
}