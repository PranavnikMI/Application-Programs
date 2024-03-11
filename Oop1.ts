// Class = Data + Function
// Class = Characteristics + Behaviour

class Student
{
    // Characteristics
    Name : string;
    Marks : number;
    Age : number;
    City : string;

    // Behaviours
    constructor(N : string, M : number, A : number, C : string)
    {
        console.log("Inside constructor");
        this.Name = N;
        this.Marks = M;
        this.Age = A;
        this.City = C;
    }

    Display() : void
    {
        console.log("Name of Student : "+this.Name);
        console.log("Marks of Student : "+this.Marks);
        console.log("Age of Student : "+this.Age);
        console.log("City of Student : "+this.City);
    }
}

var obj135 = new Student("Ranjit",98,24,"Pune");
var obj162 = new Student("Dev",90,22,"Jalgaon");

obj135.Display();
obj162.Display();