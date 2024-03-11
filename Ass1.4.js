function ChkPrime(No) {
    var Flag = true;
    var Cnt = 2;
    while (Cnt <= No / 2) {
        if (No % Cnt == 0) {
            Flag = false;
            break;
        }
        Cnt++;
    }
    return Flag;
}
var Ret = false;
Ret = ChkPrime(9);
if (Ret == true) {
    console.log("Given No is Prime Number");
}
else {
    console.log("Given No is not Prime Number");
}
