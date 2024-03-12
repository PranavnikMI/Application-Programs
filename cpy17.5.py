
def DigitSummation(No):
    Sum = 0
    while(No >= 1):
        Sum = Sum + int(No % 10)
        No = No / 10

    return Sum

def main():
    Size = int(input("Enter size of list : "))
    Value = 0
    Arr = list()
    FSum = 0

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    print("Summation of digit of number in list is :")
    for i in range(len(Arr)):
        FSum = DigitSummation(Arr[i])
        print(FSum, end = "  ")

if __name__ == "__main__":
    main()