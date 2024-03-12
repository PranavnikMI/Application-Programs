

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))
    No = 0

    for i in range(Row):
        if(i % 2 == 0):
            No = 2
        else:
            No = 1

        for j in range(Column):
            print(No , end = "  ")
            No = No + 2
        print()


if __name__ == "__main__":
    main()