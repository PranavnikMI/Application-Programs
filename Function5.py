
# Function accepts multiple parameters return multiple parameters
def Marvellous(Value1, Value2):
    Addition = Value1 + Value2
    Subtraction = Value1 - Value2
    Multiplication = Value1 * Value2

    return Addition,Subtraction,Multiplication

def main():
    Ret1, Ret2, Ret3 = Marvellous(11,6)
    print("Addition is : ",Ret1)
    print("Subtraction is : ",Ret2)
    print("Multition is : ",Ret3)

if __name__ == "__main__":
    main()