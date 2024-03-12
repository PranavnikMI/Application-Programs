import functools

def CheckEven(No):
    return (No % 2 == 0)

def Increase(No):
    return No+2

def Add(A,B):
    return A+B

def main():
    Data = []
    
    print('Enter number of elements : ')
    Size = int(input())

    print("Enter the elments : ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
    
    output = list(filter(CheckEven,Data))
    print(output)
    
    moutput = list(map(Increase,output))
    print(moutput)

    Sum = int(functools.reduce(Add,moutput))
    print(Sum)


if __name__ == "__main__":
    main()