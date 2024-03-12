
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Mult = 1
    Arr = list()

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] % 2 != 0):
            Mult = Mult * Arr[i]
    
    print("Multiplication of all odd number in the list are :",Mult)

if __name__ == "__main__":
    main()