
def ChkPrime(No):
    Flag = False
    for i in range(2,int(No / 2) + 1):
        if(No % i == 0):
            Flag = True
            break
        else:
            Flag = False
    return Flag

def main():
    Value = int(input("Enter number : "))

    Ans = ChkPrime(Value)
    if(Ans == True):
        print("Not Prime number")
    else:
        print("Prime number")

if __name__ == "__main__":
    main()