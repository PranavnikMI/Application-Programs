
def main():
    str = input("Enter String : ")
    iCnt = 0
    Arr = list(str)

    for i in Arr:
        if(ord(i) >= 65 and ord(i) <= 90):
            iCnt = iCnt + 1

    print("No of capital case letter in string is : ",iCnt)

if __name__ == "__main__":
    main()