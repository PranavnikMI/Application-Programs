

def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(1,Row + 1):
        k = i
        for j in range(Column):
            print(k, end = "    ")
            k = k + 1
        print()
    
if __name__ == "__main__":
    main()