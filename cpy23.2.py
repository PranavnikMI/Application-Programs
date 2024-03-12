
def main():
    ch = input("Enter Character : ")

    if(ord(ch) >= 65 and ord(ch) <= 90):
        print("Given input is Capital character")
    elif(ord(ch) >= 97 and ord(ch) <= 122):
        print("Given input is Small character")
    else:
        print("Given input is not character")

if __name__ == "__main__":
    main()