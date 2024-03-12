
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    iCnt = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] % 2 == 0):
            iCnt = iCnt + 1

    print("Frequency of even number in list is : ",iCnt)

if __name__ == "__main__":
    main()