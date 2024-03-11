function Maximum() {
    var Arr = [];
    for (var _i = 0; _i < arguments.length; _i++) {
        Arr[_i] = arguments[_i];
    }
    var Cnt = 0;
    var Max = 0;
    for (Cnt = 0; Cnt < Arr.length; Cnt++) {
        if (Arr[Cnt] > Max) {
            Max = Arr[Cnt];
        }
    }
    return Max;
}
var Ret = Maximum(23, 89, 6);
console.log("Maximum number is : " + Ret);
