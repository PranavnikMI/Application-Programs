import functools

CheckEven = lambda No : (No % 2 == 0)

Increase = lambda No : No+2

Add = lambda A,B : A+B

def main():
    Data = []
    
    print('Enter number of elements : ')
    Size = int(input())

    print("Enter the elments : ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
    
    print("Input data : ",Data)

    output = list(filter(CheckEven,Data))
    print("Output after filter : ",output)
    
    moutput = list(map(Increase,output))
    print("Output after map : ",moutput)

    Sum = int(functools.reduce(Add,moutput))
    print("Output after reduce : ",Sum)


if __name__ == "__main__":
    main()