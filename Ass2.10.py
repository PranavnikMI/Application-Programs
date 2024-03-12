
def main():
    No = int(input("Enter Number : "))
    Sum = 0

    while(No > 0):
        Sum = Sum + (No % 10)
        No = int(No / 10)

    print("Addition of Digit is : ",Sum)


if __name__ == "__main__":
    main()