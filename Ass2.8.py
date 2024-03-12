
def main():
    No = int(input("Enter number : "))

    for i in range(1, No + 1):
        for j in range(1 , No + 1):
            if(j <= i):
                print(j, end = "    ")
        print()

if __name__ == "__main__":
    main()