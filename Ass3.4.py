
def main():
    Length = int(input("Enter the number of element that you want in list : "))
    Data = []
    iCnt = 0

    print("Enter the element of list :")
    for i in range(Length):
        Temp = int(input())
        Data.append(Temp)

    No = int(input("Enter the number whose frequency you want to check : "))
    for j in range(len(Data)):
        if(Data[j] == No):
            iCnt = iCnt + 1

    print("Frequency of {0} in the given list is : {1}".format(No,iCnt))

if __name__ == "__main__":
    main()