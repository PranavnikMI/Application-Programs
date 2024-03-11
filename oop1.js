// Class = Data + Function
// Class = Characteristics + Behaviour
var Student = /** @class */ (function () {
    // Behaviours
    function Student(N, M, A, C) {
        console.log("Inside constructor");
        this.Name = N;
        this.Marks = M;
        this.Age = A;
        this.City = C;
    }
    Student.prototype.Display = function () {
        console.log("Name of Student : " + this.Name);
        console.log("Marks of Student : " + this.Marks);
        console.log("Age of Student : " + this.Age);
        console.log("City of Student : " + this.City);
    };
    return Student;
}());
var obj135 = new Student("Ranjit", 98, 24, "Pune");
var obj162 = new Student("Dev", 90, 22, "Jalgaon");
obj135.Display();
obj162.Display();
