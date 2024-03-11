var __extends = (this && this.__extends) || (function () {
    var extendStatics = function (d, b) {
        extendStatics = Object.setPrototypeOf ||
            ({ __proto__: [] } instanceof Array && function (d, b) { d.__proto__ = b; }) ||
            function (d, b) { for (var p in b) if (Object.prototype.hasOwnProperty.call(b, p)) d[p] = b[p]; };
        return extendStatics(d, b);
    };
    return function (d, b) {
        if (typeof b !== "function" && b !== null)
            throw new TypeError("Class extends value " + String(b) + " is not a constructor or null");
        extendStatics(d, b);
        function __() { this.constructor = d; }
        d.prototype = b === null ? Object.create(b) : (__.prototype = b.prototype, new __());
    };
})();
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
var CircleX = /** @class */ (function (_super) {
    __extends(CircleX, _super);
    function CircleX(A) {
        return _super.call(this, A) || this;
    }
    CircleX.prototype.Circumferance = function () {
        var Circumferance = 0;
        Circumferance = 2 * this.PI * this.Radius;
        return Circumferance;
    };
    return CircleX;
}(Circle));
var obj1 = new CircleX(10);
var obj2 = new CircleX(20);
var Ret = 0;
Ret = obj1.Area();
console.log("Area of obj1 is : " + Ret);
Ret = obj1.Circumferance();
console.log("Circumferance of obj1 is : " + Ret);
Ret = obj2.Area();
console.log("Area of obj2 is : " + Ret);
Ret = obj2.Circumferance();
console.log("Circumferance of obj2 is : " + Ret);
