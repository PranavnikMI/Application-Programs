function Summation(Arr) {
    var Cnt = 0;
    var Sum = 0;
    for (Cnt = 0; Cnt < Arr.length; Cnt++) {
        Sum = Sum + Arr[Cnt];
    }
    return Sum;
}
var Sum = new Array(7);
Sum = [23, 6, 7, 4, 5, 7];
var Ret = 0;
Ret = Summation(Sum);
console.log("Summation is : " + Ret);
