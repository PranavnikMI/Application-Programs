from functools import reduce

def CheckRange(No):
    if(No >= 70 and No <= 90):
        return True 
    else:
        return False

def Increase(No):
    return No + 10

def Product(A,B):
    return A*B


CheckRangeX = lambda No :(No >= 70 and No <= 90)
IncreaseX = lambda No : (No + 10)
ProductX = lambda A,B : A*B

def main():
    Size = int(input("Enter Size of list : "))
    Data = list()

    print("Enter number of list")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
    print(Data)

    Output = list(filter(CheckRangeX,Data))
    print(Output)

    Moutput = list(map(IncreaseX,Output))
    print(Moutput)

    Ans = int(reduce(ProductX,Moutput))
    print(Ans)

if __name__ == "__main__":
    main()