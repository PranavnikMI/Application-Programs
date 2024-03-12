import Marvellous

def main():
    Value1 = int(input("Enter First Number : "))
    Value2 = int(input("Enter Second Number : "))
    Result = 0

    Result = Marvellous.Addition(Value1,Value2)
    print("Addition is : ",Result)

    Result = Marvellous.Substraction(Value1,Value2)
    print("Substraction is : ",Result)

    Result = Marvellous.Multiplication(Value1,Value2)
    print("Multiplication is : ",Result)

    Result = Marvellous.Division(Value1,Value2)
    print("Division is : ",Result)

if __name__ == "__main__":
    main()