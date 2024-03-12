
def Divisible(No):
    Flag = False
    if(No % 5 == 0):
        Flag = True
    else:
        Flag = False
    return Flag

def main():
    print("Enter Number :")
    Value = int(input())

    Ans = Divisible(Value)
    print(Ans)

if __name__ == "__main__":
    main()