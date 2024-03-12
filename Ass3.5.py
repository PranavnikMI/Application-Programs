import MarvellousNum

def ListPrime(Brr):
    Sum = 0
    for i in range(len(Brr)):
        if(MarvellousNum.ChkPrime(Brr[i])):
            Sum = Sum + Brr[i]
    return Sum

def main():
    Size = int(input("Enter number of element that you want in list : "))
    Arr = list()
    Ans = 0

    print("Enter the elements :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    Ans = ListPrime(Arr)
    print("Addition of all prime number is : ",Ans)


if __name__ == "__main__":
    main()