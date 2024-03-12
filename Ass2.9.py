
def main():
    No = int(input("Enter Number : "))
    iCnt = 0

    while(No > 0):
        No = int(No / 10)
        iCnt = iCnt + 1

    print("Number of digit in number is : ",iCnt)

if __name__ == "__main__":
    main()