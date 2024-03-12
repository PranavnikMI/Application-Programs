
def DigitCheck(No,Total):
    iCnt = 0
    while(No >= 1):
        iCnt = iCnt + 1
        No = No / 10

    if(iCnt == Total):
        return True
    else:
        return False

def main():
    Size = int(input("Enter size of list : "))
    Freq = int(input("Enter number of digit that you want to print : "))
    Value = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    print("{0} digit number in the list is :".format(Freq))
    for i in range(len(Arr)):
        if(DigitCheck((Arr[i]),Freq) == True):
            print(Arr[i], end = "  ")
if __name__ == "__main__":
    main()