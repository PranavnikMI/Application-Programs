function SecondMax(Arr) {
    var Max = 0;
    var Cnt = 0;
    var Ans = 0;
    for (Cnt = 0; Cnt < Arr.length; Cnt++) {
        if (Arr[Cnt] > Max) {
            Ans = Max;
            Max = Arr[Cnt];
        }
        else {
            if (Arr[Cnt] > Ans) {
                Ans = Arr[Cnt];
            }
        }
    }
    return Ans;
}
var SM = new Array(9);
SM = [23, 87, 89, 6, 29, 56, 45, 77, 32];
var Ret = 0;
Ret = SecondMax(SM);
console.log("Second Maximum number is : " + Ret);
