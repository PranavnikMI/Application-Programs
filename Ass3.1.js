var Arithmetic = /** @class */ (function () {
    function Arithmetic(A, B) {
        this.Number1 = A;
        this.Number2 = B;
    }
    Arithmetic.prototype.Add = function () {
        return this.Number1 + this.Number2;
    };
    Arithmetic.prototype.Sub = function () {
        return this.Number1 - this.Number2;
    };
    Arithmetic.prototype.Multi = function () {
        return this.Number1 * this.Number2;
    };
    Arithmetic.prototype.Div = function () {
        return this.Number1 / this.Number2;
    };
    return Arithmetic;
}());
var obj1 = new Arithmetic(10, 20);
var obj2 = new Arithmetic(50, 100);
var Ret = 0;
Ret = obj1.Add();
console.log("Addition of obj1 is : " + Ret);
Ret = obj1.Sub();
console.log("Subtraction of obj1 is : " + Ret);
Ret = obj1.Multi();
console.log("Multiplication of obj1 is : " + Ret);
Ret = obj1.Div();
console.log("Division of obj1 is : " + Ret);
Ret = obj2.Add();
console.log("Addition of obj2 is : " + Ret);
Ret = obj2.Sub();
console.log("Subtraction of obj2 is : " + Ret);
Ret = obj2.Multi();
console.log("Multiplication of obj2 is : " + Ret);
Ret = obj2.Div();
console.log("Division of obj2 is : " + Ret);
