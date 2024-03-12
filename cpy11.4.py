
def main():
    No1 = int(input("Enter first number : "))
    No2 = int(input("Enter second number : "))
    Sum = 0

    for i in range(No1,No2+1):
        if(i % 2 == 0):
            Sum = Sum + i
    
    print("Addition of even number between range {0} and {1} is : ".format(No1,No2),Sum)

if __name__ == "__main__":
    main()