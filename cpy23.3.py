
def main():
    Digit = input("Enter Digit : ")

    if(ord(Digit) >= 48 and ord(Digit) <= 57):
        print("Givn input is Digit")
    else:
         print("Givn input is not a Digit")

if __name__ == "__main__":
    main()