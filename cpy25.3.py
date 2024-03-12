
def main():
    str = input("Enter String : ")
    iCCnt = 0
    iSCnt = 0
    Arr = list(str)

    for i in Arr:
        if(ord(i) >= 65 and ord(i) <= 90):
            iCCnt = iCCnt + 1
        if(ord(i) >= 97 and ord(i) <= 122):
            iSCnt = iSCnt + 1

    print("Difference B/W No of capital and small case letter in string is : ",iCCnt - iSCnt)

if __name__ == "__main__":
    main()