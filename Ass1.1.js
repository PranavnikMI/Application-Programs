function Maximum(No1, No2, No3) {
    if (No1 > No2 && No1 > No3) {
        return No1;
    }
    else if (No2 > No1 && No2 > No3) {
        return No2;
    }
    else {
        return No3;
    }
}
var Ret = 0;
Ret = Maximum(23, 89, 6);
console.log("Maximum number is : " + Ret);
