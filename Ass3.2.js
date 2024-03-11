var Circle = /** @class */ (function () {
    function Circle(A) {
        this.Radius = A;
        this.PI = 3.14;
    }
    Circle.prototype.Area = function () {
        var Area = 0;
        Area = this.PI * this.Radius * this.Radius;
        return Area;
    };
    return Circle;
}());
var obj1 = new Circle(10);
var obj2 = new Circle(20);
var Ret = 0;
Ret = obj1.Area();
console.log("Area of Circle of obj1 is : " + Ret);
Ret = obj2.Area();
console.log("Area of Circle of obj2 is : " + Ret);
