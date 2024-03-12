
def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(1, Row+1):
        for j in range(1,Column+1):
            if(i == 1 or i == Row or j == 1 or j == Column):
                print(j, end = "     ")
            else:
                print("@", end = "     ")
        print()
    
if __name__ == "__main__":
    main()