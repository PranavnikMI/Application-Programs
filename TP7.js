function Area(Radius, PI) {
    var Ans = 0;
    if (PI == undefined) {
        PI = 3.14;
    }
    Ans = PI * Radius * Radius;
    return Ans;
}
var Ret = 0;
Ret = Area(5);
console.log("Area of Circle is : " + Ret);
