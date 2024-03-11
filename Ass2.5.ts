
function ChkStr(str : string) : boolean
{
    var Arr : string[] = str.split(" ");
    var Flag : boolean = false;
    let Cnt : number = 0;

    while(Cnt < Arr.length)
    {
        if(Arr[Cnt] === "Marvellous")
        {
            Flag = true;
        }
        Cnt++;
    }

    return Flag;
}

var Str : string = "Pune Kothrud Marvellous Infosystems";
var Ret : boolean = false;

Ret = ChkStr(Str);
if(Ret == true)
{
    console.log("String Contain Marvellous in it");
}
else
{
    console.log("String does not Contain Marvellous in it");
}