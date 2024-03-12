
def main():
    Size = int(input("Enter size of list : "))
    No = int(input("Enter number that index  you want to check in list : "))
    Value = 0
    Arr = list()
    Flag = False

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] == No):
            break

    print("Index of given nmber in list is : ", i)
        
if __name__ == "__main__":
    main()