
function ChkPrime(No : number) : boolean
{
    let Flag : boolean = true;
    let Cnt : number = 2;

    while(Cnt <= No / 2)
    {
        if(No % Cnt == 0)
        {
            Flag = false;
            break;
        }
        Cnt++;
    }
    
    return Flag;
}

var Ret : boolean = false;

Ret = ChkPrime(11);

if(Ret == true)
{
    console.log("Given No is Prime Number");
}
else
{
    console.log("Given No is not Prime Number");
}