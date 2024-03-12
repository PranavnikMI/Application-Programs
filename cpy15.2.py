
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    EiCnt = 0
    OiCnt = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] % 2 == 0):
            EiCnt = EiCnt + 1
        else:
            OiCnt = OiCnt + 1

    print("difference B/W Frequency of even number and odd number in list is : ",EiCnt - OiCnt)

if __name__ == "__main__":
    main()