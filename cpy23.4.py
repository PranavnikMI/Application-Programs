
def main():
    ch = input("Enter Character : ")

    if((ord(ch) >= 97 and ord(ch) <= 122) ):
        print("Given input is small character")
    else:
        print("Given input is not small character")

if __name__ == "__main__":
    main()