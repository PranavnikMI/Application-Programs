

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))
    ch = 'a'

    for i in range(Row):
        for j in range(1,Column+1):
            if(i % 2 == 0):
                print(ch, end = "   ")
                ch = chr(ord(ch) + 1)
            else:
                print(j, end = "   ")
        print()
        ch = 'a'


if __name__ == "__main__":
    main()