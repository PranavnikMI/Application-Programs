

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(Row):
        for j in range(Column):
            if(j % 2 != 0):
                print("*", end = "     ")
            else:
                print("#", end = "     ")
        print()


if __name__ == "__main__":
    main()