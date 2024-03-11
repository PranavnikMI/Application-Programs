// Write an application which performs addition and substraction of 2 numbers

// Kay karayecha ahe ? (Methods)    -> Addition & Substraction

// Te karayeala kay lanagar ahe? (Data) -> 2 numbers

class Arithematic
{
    // Data / Characteristics
    No1 : number;
    No2 : number;

    constructor(A : number, B : number)
    {
        this.No1 = A;
        this.No2 = B;
    }

    Addition(): number
    {
        return this.No1+this.No2;
    }

    Substraction() : number
    {
        return this.No1-this.No2;
    }
}
var obj1 = new Arithematic(11,10);
var obj2 = new Arithematic(21,15);

var Ret : number = 0;

Ret = obj1.Addition();
console.log("Addition of obj1 : "+Ret);     // 21

Ret = obj1.Substraction();
console.log("Substraction of obj1 : "+Ret); // 1

Ret = obj2.Addition();
console.log("Addition of obj2 : "+Ret);     // 36

Ret = obj2.Substraction();
console.log("Substraction of obj2 : "+Ret); // 6