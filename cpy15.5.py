
def main():
    Size = int(input("Enter size of list : "))
    No = int(input("Enter number that whose frequency you want to check in list : "))
    Value = 0
    Arr = list()
    iCnt = 0

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] == No):
            iCnt = iCnt + 1

    print("Frequency of given number in the list is : ",iCnt)

if __name__ == "__main__":
    main()