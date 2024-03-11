function Area(Radius, PI) {
    if (PI === void 0) { PI = 3.14; }
    var Area = 0;
    Area = PI * Radius * Radius;
    return Area;
}
var Ret = 0;
Ret = Area(5);
console.log("Area of Circle is : " + Ret);
