
def main():
    No = int(input("Enter number that you want to check : "))
    Digit1 = int(input("Enter Digit1 : "))
    Digit2 = int(input("Enter Digit2 : "))
    Value = 0
    iCnt = 0
    Temp = No
    

    while(Temp >= 1):
        Value = Temp % 10
        if(int(Value) > Digit1 and int(Value) < Digit2):
            iCnt = iCnt + 1
        Temp = Temp / 10

    print("Frequency of Digit of number in between {0} and {1} is :".format(Digit1,Digit2),iCnt)

if __name__ == "__main__":
    main()