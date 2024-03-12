
def main():
    str = input("Enter String : ")
    iCnt = 0
    Arr = list(str)

    for i in Arr:
        if(ord(i) >= 97 and ord(i) <= 122):
            iCnt = iCnt + 1

    print("No of small case letter in string is : ",iCnt)

if __name__ == "__main__":
    main()