
def main():
    ch = input("Enter character : ")

    if(ord(ch) >= 65 and ord(ch) <= 90):
        for i in range(ord(ch),90+1):
            print(chr(i), end ="    ")
    elif(ord(ch) >= 97 and ord(ch) <= 122):
        for i in range(ord(ch),97-1,-1):
            print(chr(i), end ="    ")
    else:
        print("In is not character")
        return -1


if __name__ == "__main__":
    main()