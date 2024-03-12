
def main():
    No = int(input("Enter number that you want to check : "))
    Value = 0
    Mult = 1
    Temp = No
    

    while(Temp >= 1):
        Value = Temp % 10
        if(int(Value) != 0):
            Mult = Mult * int(Value)
        Temp = Temp / 10

    print("Multiplication of digit in number {0} is :".format(No),Mult)

if __name__ == "__main__":
    main()