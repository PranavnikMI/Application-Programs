
def main():
    No1 = int(input("Enter number that you want to check : "))
    No2 = int(input("Enter number whose frequency you want to check : "))
    Value = 0
    iCnt = 0
    Temp = No1
    

    while(No1 >= 1):
        Value = No1 % 10
        if(int(Value) == No2):
            iCnt = iCnt + 1
        No1 = No1 / 10

    print("Frequency of {0} in number {1} is : {2}".format(No2,Temp,iCnt))

if __name__ == "__main__":
    main()