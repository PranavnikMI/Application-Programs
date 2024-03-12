
def main():
    No = int(input("Enter number : "))
    Value = 0

    while(No >= 1):
        Value = No % 10
        print(int(Value))
        No = No / 10

if __name__ == "__main__":
    main()