

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))
    ch = 'A'

    for i in range(Row):
        for j in range(Column):
            print(ch , end = "  ")
        ch = chr(ord(ch) + 1)
        print()


if __name__ == "__main__":
    main()