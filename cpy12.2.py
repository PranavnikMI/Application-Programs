
def main():
    No = int(input("Enter number : "))
    Value = 0
    Flag = False

    while(No >= 1):
        Value = No % 10
        if(int(Value) == 0):
            Flag = True
            break
        No = No / 10

    if(Flag == True):
        print("No contain zero")
    else:
        print("No do not contain zero")

if __name__ == "__main__":
    main()