function ChkAmstrong(No) {
    var Value = No;
    var Temp = No;
    var Cnt = 0;
    var Ans = 0;
    var Falg = false;
    var REM = 0;
    var Sum = 1;
    var Counter = 0;
    while (Value != 0) {
        Value = Math.floor(Value / 10);
        Cnt++;
    }
    while (Temp != 0) {
        REM = Temp % 10;
        while (Counter < Cnt) {
            Sum = Sum * REM;
            Counter++;
        }
        Ans = Ans + Sum;
        Temp = Math.floor(Temp / 10);
        Sum = 1;
        Counter = 0;
    }
    if (No == Ans) {
        Falg = true;
    }
    return Falg;
}
var Ret = false;
Ret = ChkAmstrong(9444);
if (Ret == true) {
    console.log("It is Amstrong Number");
}
else {
    console.log("It is not Amstrong Number");
}
