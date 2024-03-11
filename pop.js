function Addition(No1, No2) {
    var Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
function Substraction(No1, No2) {
    var Ans = 0;
    Ans = No1 - No2;
    return Ans;
}
var A = 11;
var B = 10;
var Ret = 0;
Ret = Addition(A, B);
console.log("Addition is : " + Ret);
Ret = Substraction(A, B);
console.log("Substraction is : " + Ret);
