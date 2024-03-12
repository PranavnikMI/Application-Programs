
def main():
    No = int(input("Enter number that you want to check : "))
    Value = 0
    iCnt = 0
    Temp = No
    

    while(Temp >= 1):
        Value = Temp % 10
        if(int(Value) % 2 != 0):
            iCnt = iCnt + 1
        Temp = Temp / 10

    print("Frequency of odd number in {0} is :".format(No),iCnt)

if __name__ == "__main__":
    main()