
class Arithmatic:
    def __init__(self,A,B):
        print("Inside constructor")
        self.No1 = A
        self.No2 = B

    def Addition(self):
        Ans = 0
        Ans = self.No1 + self.No2
        return Ans

    def Substrction(self):
        Ans = 0
        Ans = self.No1 - self.No2
        return Ans

    
def main():
    Value1 = int(input("Enter first number "))
    Value2 = int(input("Enter second number "))

    obj = Arithmatic(Value1,Value2)

    Ret = obj.Addition()
    print("Addition is : ",Ret)

    Ret = obj.Substrction()
    print("Substrction is : ",Ret)

if __name__ == "__main__":
    main()