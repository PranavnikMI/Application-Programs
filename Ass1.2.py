
def ChkNum(No):
    Flag = False
    if(No % 2 == 0):
        Flag = True
    else:
        Flag = False

    return Flag

def main():
    Value = int(input("Enter Number : "))

    Ans = ChkNum(Value)
    if(Ans == True):
        print("No is even")
    else:
        print("No is odd")    

if __name__ == "__main__":
    main()