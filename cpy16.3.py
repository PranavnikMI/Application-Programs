
def main():
    Size = int(input("Enter size of list : "))
    No = int(input("Enter number that last index you want to check in list : "))
    Value = 0
    index = 0
    Arr = list()
    Flag = False

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] == No):
            index = i

    print("last occurance Index of given nmber in list is : ", index)
        
if __name__ == "__main__":
    main()