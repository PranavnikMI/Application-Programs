

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(Row):
        for j in range(1,Column+1):
            if(i % 2 == 0):
                print(j, end = "    ")
            else:
                print(-abs(j), end = "   ")
        
        print()


if __name__ == "__main__":
    main()