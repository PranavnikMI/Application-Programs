
def main():
    ch = input("Enter Character : ")

    if((ord(ch) >= 65 and ord(ch) <= 90) or (ord(ch) >= 97 and ord(ch) <= 122) ):
        print("Given input is character")
    else:
        print("Given input is not character")

if __name__ == "__main__":
    main()