function Maximum(Arr) {
    var Cnt = 0;
    var Max = Arr[0];
    for (Cnt = 0; Cnt < Arr.length; Cnt++) {
        if (Arr[Cnt] > Max) {
            Max = Arr[Cnt];
        }
    }
    return Max;
}
var Maxi = [29, 89, 6, 29, 56, 45, 77, 32];
var Ret = 0;
Ret = Maximum(Maxi);
console.log("Maximum number in Array is : " + Ret);
