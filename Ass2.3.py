
def Fact(No):
    Ret = 1
    for i in range(No,0,-1):
        Ret = Ret * i
    return Ret

def main():
    Value = int(input("Enter number : "))

    Ans = Fact(Value)
    print("Factorial is : ",Ans)

if __name__ == "__main__":
    main()