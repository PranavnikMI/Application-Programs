
def main():
    No1 = int(input("Enter first number : "))
    No2 = int(input("Enter second number : "))
    
    print("reserve of number between range {0} and {1} is : ".format(No1,No2))
    for i in range(No2,No1-1,-1):
        print(i,end = "  ")

if __name__ == "__main__":
    main()