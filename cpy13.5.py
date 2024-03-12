
def main():
    No = int(input("Enter number that you want to check : "))
    Value = 0
    OSum = 0
    ESum = 0
    Temp = No
    

    while(Temp >= 1):
        Value = Temp % 10
        if(int(Value) % 2 == 0):
            ESum = ESum +int(Value)
        else:
            OSum = OSum + int(Value)
        Temp = Temp / 10

    print("Difference b/w summation of even and odd digit in number {0} is :".format(No),ESum-OSum)

if __name__ == "__main__":
    main()