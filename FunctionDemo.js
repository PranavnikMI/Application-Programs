// Positional parameters
function Display(No1, No2) {
    console.log("Value of No1 is : " + No1);
    console.log("Value of No2 is : " + No2);
}
console.log("First line of Application : ");
var A = 11;
var B = 21;
Display(A, B);
Display(11, 21);
function Multiplication(A, B, C) {
    var Ans = 0;
    Ans = A * B * C;
    return Ans;
}
var No1 = 10;
var No2 = 20;
var No3 = 30;
var Ret = 0;
Ret = Multiplication(No1, No2, No3);
console.log("Multiplication is : " + Ret);
