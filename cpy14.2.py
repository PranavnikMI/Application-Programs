
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    print("Element divide by 5 is :")
    for i in range(len(Arr)):
        if(Arr[i] % 5 == 0):
            print(Arr[i], end = "  ")

if __name__ == "__main__":
    main()