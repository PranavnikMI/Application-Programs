
def Add(No1,No2):
    Ret = No1 + No2
    return Ret

def main():
    Value1 = int(input("Enter First number : "))
    Value2 = int(input("Enter Second number : "))

    Ans = Add(Value1,Value2)
    print("Addition is : ",Ans)

if __name__ == "__main__":
    main()