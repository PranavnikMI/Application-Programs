
def FactSum(No):
    Sum = 0
    for i in range(1,int(No/2)+1):
        if(No % i == 0):
            Sum = Sum + i
    return Sum
    
def main():
    Value = int(input("Enter number : "))

    Ans = FactSum(Value)
    print("Addition of factorial is : ",Ans)

if __name__ == "__main__":
    main()