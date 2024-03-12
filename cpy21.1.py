

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))
    No = 1

    for i in range(Row,0,-1):
        for j in range(Column):
            print(No , end = "      ")
            No = No + 1
            if(No == 10):
                No = 1
        print()


if __name__ == "__main__":
    main()