

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(Row,0,-1):
        for j in range(Column):
            print(i, end = "     ")
        print()


if __name__ == "__main__":
    main()