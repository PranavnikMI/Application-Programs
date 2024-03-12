class HDFC:
    ROI = 9.5      # Class Veriable

    def __init__(self,Name,Amount):      # Constructor
        self.AccountHolder = Name
        self.Balance = Amount       # Instance Veriable
        print("Welcome ",self.AccountHolder)
        print("Your Account gets succesfully created with initial balance : ",self.Balance)

    def DisplayBalance(self):       # Instance method
        print("Hello ",self.AccountHolder)
        print("Your account balance is : ",self.Balance)

    def Withdrawl(self,Amount):      # Instance method
        if(self.Balance < Amount):
            print("There is no sufficient balance")
        else:
            self.Balance = self.Balance - Amount
            print("Amount withdrawl succesfully...")

    def Deposit(self,Amount):       # Instance method
        self.Balance = self.Balance + Amount
        print("Amount deposited succcesfully...")

    @classmethod
    def DisplayBankInfo(cls):       # Class method
        print("Welcome to HDFC bank potal")
        print("Our bank is PVT LTD bank")
        print("We provide Rate of Intrest on saving Account is : ",cls.ROI)

    @staticmethod
    def DisplayKYCInfo():
        print("According to the rules of RBI you should provide below documents for KYC")
        print("Your Aadhar card")
        print("Your PAN card")
        print("Your Passport size photo")



def main():
    print("ROI of HDFC bank is : ",HDFC.ROI)
    HDFC.DisplayBankInfo()
    HDFC.DisplayKYCInfo()

    print("Creating new account...")
    Amit = HDFC("Amit",5000)   # __init__(100,"Amit",5000)

    print("Creating new account...")
    Sagar = HDFC("Sagar",3000)   # __init__(200,"Sagar",3000)

    print("Performing operation on Amit's Account")
    Amit.Deposit(2000)
    Amit.DisplayBalance()

    Amit.Withdrawl(1000)
    Amit.DisplayBalance()

    print("Performing operation on Sagar's Account")
    Sagar.Deposit(4000)
    Sagar.DisplayBalance()

    Sagar.Withdrawl(500)
    Sagar.DisplayBalance()


if __name__ ==  "__main__":
    main()