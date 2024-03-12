
def main():
    ch = input("Enter character : ")

    if(ord(ch) >= 65 and ord(ch) <= 90):
        ch = chr(ord(ch) + 32)
    elif(ord(ch) >= 97 and ord(ch) <= 122):
        ch = chr(ord(ch) - 32)
    else:
        print("In is not character")
        return -1

    print("Opposite case is : ",ch)

if __name__ == "__main__":
    main()