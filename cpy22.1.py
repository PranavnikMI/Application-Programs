
def main():
    Row = int(input("Enter number of rows : "))
    Column = int(input("Enter number of Column : "))

    for i in range(1,Row+1):
        for j in range(1,Column+1):
            if(j > i):
                print("#", end = "      ")
            else:
                print("*", end = "      ")

        print()
    
if __name__ == "__main__":
    main()