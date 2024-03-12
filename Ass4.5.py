import functools

def CheckPrime(No):
    for i in range(2,int(No/2)+1):
        if(No % i == 0):
            return False
            break
    return True

def Multiplication(No):
    return No * 2

def Maximum(A,B):
    if(A > B):
        return A
    else:
        return B


Multi = lambda A : A*2
Max = lambda A,B : A if A > B else B

def main():
    size = int(input("Enter the size of the list that you want : "))
    Arr = list()

    print("Enter the element of the list :")
    for i in range(size):
        Value = int(input())
        Arr.append(Value)
    print(Arr)
    
    Output = list(filter(CheckPrime,Arr))
    print(Output)

    MOutput = list(map(Multi,Output))
    print(MOutput)

    Ans = int(functools.reduce(Max,MOutput))
    print(Ans)

if __name__ == "__main__":
    main()