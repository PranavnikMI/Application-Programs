function ChkStr(str) {
    var Arr = str.split(" ");
    var Flag = false;
    var Cnt = 0;
    while (Cnt < Arr.length) {
        if (Arr[Cnt] === "Marvellous") {
            Flag = true;
        }
        Cnt++;
    }
    return Flag;
}
var Str = "Pune Kothrud Marvellous Infosystems";
var Ret = false;
Ret = ChkStr(Str);
if (Ret == true) {
    console.log("String Contain Marvellous in it");
}
else {
    console.log("String does not Contain Marvellous in it");
}
