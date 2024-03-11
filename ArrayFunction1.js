function Addition(Arr) {
    var Sum = 0;
    var Cnt = 0;
    for (Cnt = 0; Cnt < Arr.length; Cnt++) {
        Sum = Sum + Arr[Cnt];
    }
    return Sum;
}
var Week = [10, 20, 30, 40, 50];
var Ret = 0;
Ret = Addition(Week);
console.log("Additon is : " + Ret);
