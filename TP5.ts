
function Maximum(Value1 : number, Value2 : number) : boolean
{
    var Flag : boolean = false

    if(Value1 > Value2)
    {
        Flag = false
    }
    else
    {
        Flag = true
    }

    return Flag
}

var Ret : boolean = false
var No1 : number = 10
var No2 : number = 11

Ret = Maximum(No1, No2)

if(Ret == true)
{
    console.log("No2 is Biggest Number")
}
else
{
    console.log("No1 is Biggest Number")
}