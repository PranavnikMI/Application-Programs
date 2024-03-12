
def main():
    Size = int(input("Enter size of list : "))
    No1 = int(input("Enter the range start number : "))
    No2 = int(input("Enter the range last number : "))
    Value = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    print("No in list in range {0} and {1} is ".format(No1,No2))
    for i in range(len(Arr)):
        if(Arr[i] >= No1 and Arr[i] <= No2):
            print(Arr[i], end = "  ")
        
if __name__ == "__main__":
    main()