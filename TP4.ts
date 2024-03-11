
function Addition(Value1 : number, Value2 :number) : number
{
    var Ans : number = 0

    Ans = Value1 + Value2

    return Ans
}

var Ret : number = 0
var No1 : number = 10
var No2 : number = 11

Ret = Addition(No1,No2)

console.log("Addition of "+No1+" and "+No2+" is : "+Ret)