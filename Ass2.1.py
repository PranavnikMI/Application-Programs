import Arithmatic

def main():
    No1 = int(input("Enter first number : "))
    No2 = int(input("Enter second number : "))
    Ans = 0

    Ans = Arithmatic.Add(No1,No2)
    print("Addition is : ",Ans)

    Ans = Arithmatic.Sub(No1,No2)
    print("Subtraction is : ",Ans)

    Ans = Arithmatic.Mult(No1,No2)
    print("Multiplication is : ",Ans)

    Ans = Arithmatic.Div(No1,No2)
    print("Division is : ",Ans)

if __name__ == "__main__":
    main()