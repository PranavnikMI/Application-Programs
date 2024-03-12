

def main():
    No = int(input("Enter number : "))
    ch = 'A'

    for i in range(No):
        print(ch, end = "  ")
        ch = chr(ord(ch) + 1)


if __name__ == "__main__":
    main()