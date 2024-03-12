
def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Arr = list()
    ESum = 0
    OSum = 0

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] % 2 == 0):
            ESum = ESum + Arr[i]
        else:
            OSum = OSum + Arr[i]

    print("Difference B/W Summation of even and odd number in the list is : ",ESum - OSum)        

if __name__ == "__main__":
    main()