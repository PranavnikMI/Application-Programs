
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Min = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    Min = Arr[0]

    for i in range(len(Arr)):
        if(Arr[i] < Min):
            Min = Arr[i]
    
    print("smaller number in list is :",Min)

if __name__ == "__main__":
    main()