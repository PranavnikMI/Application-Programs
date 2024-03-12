from functools import reduce

def CheckEven(No):
    return (No % 2 == 0)

def Square(No):
    return No**2

def Add(A,B):
    return A+B


CheckEvenX = lambda No : (No % 2 == 0)
SquareX = lambda No : No**2
AddX = lambda A,B : A+B

def main():
    Size = int(input("Enter the size of list : "))
    Data = list()

    print("Enter number of list")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
    print(Data)

    Output = list(filter(CheckEvenX,Data))
    print(Output)

    Moutput = list(map(SquareX,Output))
    print(Moutput)

    Ans = int(reduce(AddX,Moutput))
    print(Ans)

if __name__ == "__main__":
    main()