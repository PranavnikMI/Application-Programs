

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))
    chC = 'A'
    chS = 'a'

    for i in range(Row):
        for j in range(Column):
            if(i % 2 == 0):
                print(chC, end = "  ")
                chC = chr(ord(chC) + 1)
            else:
                print(chS, end = "  ")
                chS = chr(ord(chS) + 1)
        chC = 'A'
        chS = 'a'
        print()


if __name__ == "__main__":
    main()