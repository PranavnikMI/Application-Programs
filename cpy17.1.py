
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Max = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    Max = Arr[0]

    for i in range(len(Arr)):
        if(Arr[i] > Max):
            Max = Arr[i]
    
    print("Large number in list is :",Max)

if __name__ == "__main__":
    main()