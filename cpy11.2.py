
def main():
    No1 = int(input("Enter first number : "))
    No2 = int(input("Enter second number : "))

    print("No between {0} and {1} are as follow : ".format(No1,No2))
    for i in range(No1,No2+1):
        if(i % 2 == 0):
            print(i , end = "  ")

if __name__ == "__main__":
    main()