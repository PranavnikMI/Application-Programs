
class HDFC:
    HROI = 5.5
    CROI = 7.5
    EROI = 1.5
    BROI = 10

    def __init__(self,A,B,C,D,E):
        self.AccountHolder = A
        self.Age = B
        self.Number = C
        self.Balance = D

        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Your Account Created Sucessfully...")
        print("Your Account No is => ",E)
        print("Use your Account No if you have Account Related work")

    def CoustomerInfo(self): 
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Welcome => ",self.AccountHolder)
        print("Your Age => ",self.Age)
        print("Your linked mobile number with Account is => ",self.Number)
        print("Your Total Balance is => ",self.Balance)  
    
    def UpdateCoustamerInfo(self,A = None, B = None, C = None):
        if(A != None):
            self.AccountHolder = A
        if(B != None):
            self.Age = B
        if(C != None):
            self.Number = C

        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Account Holder Info updated Sucessfully...")

    def DisplayBalance(self):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Your Account Balance is => ",self.Balance," RS")

    def Deposite(self,Value):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        self.Balance = self.Balance + Value
        print("Amount Deposited Sucessfully...")

    def Widrawl(self,Value):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        if(self.Balance - Value < 1000):
            print("Unable to widrawl your Account want minimum balance 1000 Rs")
        else:
            self.Balance = self.Balance - Value
            print("Amount Widrawl Sucessfully...")

    def Logout(self):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Visit your HDFC Account Again")
        print("Thank you")

    @classmethod
    def DisplayBankInfo(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Welcome to HDFC Portal")
        print("If you want to open Account in bank plese write 'NEWACCOUNT' on screen")
        print("If you Have Account related work in bank plese write 'ACCOUNTWORK' on screen")
        print("If you want to loan from our bank plese write 'APPLYLOAN' on screen")
        print("If you want to kycinfo plese write 'KYC' on screen")
        print("If you want to deactivate your bank plese write 'DEACTIVATE' on screen")
        print("If you want to Logout from hdfc poratal enter secreat key of admin")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")

    @classmethod
    def AccountOpenInfo(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("For Account Open we have following condition")
        print("Your Full Name")
        print("Your Want minimum age of 12 years")
        print("Valid mobile number")
        print("You have to deposite minimum 1000 RS for Account opening")
    
    @classmethod
    def Help(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("If you want to check your Info then enter 'CoustomerInfo'")
        print("If you want to Check your Balance then enter 'DisplayBalance'")
        print("If you want to Deposite Money in Account then enter 'Deposite'")
        print("If you want to widrawl Money from Account then enter 'Widrawl'")
        print("If you want to update your info then enter 'UPDATE'")
        print("If you want to logout from Account then enter 'Logout'")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")

    @classmethod
    def ApplyLoan(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("We have Following Loan Servies")
        print("If you want Home Loan then enter 'HOME' on screen")
        print("If you want Car Loan then enter 'CAR' on screen")
        print("If you want Education Loan then enter 'EDUCATION' on screen")
        print("If you want BUSINESS Loan then enter 'BUSINESS' on screen")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")

    @classmethod
    def HomeLoan(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Info For Home loan and List of Document we want for home loan")
        print("ROI on Home loan is => ",cls.HROI)
        print("Aadhar Card")
        print("Land Papers")
        print("Job Certificate")
        print("LOR of Relatives")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
    
    @classmethod
    def CarLoan(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Info For Car loan and List of Document we want for Car loan")
        print("ROI on Car loan is => ",cls.CROI)
        print("Aadhar Card")
        print("Pan Card")
        print("Car Price statement from car showroom")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        
    @classmethod
    def EducationLoan(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Info For Education loan and List of Document we want for Education loan")
        print("ROI on Education loan is => ",cls.EROI)
        print("Aadhar Card")
        print("Admission letter")
        print("Fees Structure")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
       
    @classmethod
    def BusinessLoan(cls):
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("Info For Business loan and List of Document we want for Business loan")
        print("ROI on Business loan is => ",cls.BROI)
        print("Aadhar Card")
        print("Pan Card")
        print("Land Paper")
        print("LOR of Relatives")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
    
    @staticmethod
    def kyc():
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
        print("According to Rule of RBI you want 3 Documents from following Document for KYC")
        print("Aadhar Card")
        print("Pan Card")
        print("Income Certifiate")
        print("10th Certificate")
        print("12th Certificate")
        print("Job Certificate")
        print("*%-------------------------------------------------------------------------------------------------------------------------%*")

def main():
    Bank = list()
    Bank.append("HDFC")
    AccountNo = 0

    while (1):
        HDFC.DisplayBankInfo()
        Str = input("Enter your prefrance : ")

        if(Str.upper() == "NEWACCOUNT"):
            HDFC.AccountOpenInfo()

            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            A = input("name => ")
            B = int(input("Age => "))
            if(B < 12):
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                print("Your age is not Sufficient to open Account")
                print("Thank you")
                continue
            C = int(input("Mobile number => "))
            while(1):
                if(len(str(C)) != 10):
                    print("Plese enter valid mobile number")
                    C = int(input("Mobile number => "))
                else:
                    break    
            D = int(input("Amount => "))
            while(1):
                if(D < 1000):
                    print("Plese enter minimum ammount as 1000 ")
                    D = int(input("Amount => "))
                else:
                    break
        
            AccountNo = AccountNo + 1
            obj = HDFC(A,B,C,D,AccountNo)
            Bank.append(obj)

        elif(Str.upper() == "ACCOUNTWORK"):

            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            AccNo = int(input("Enter your Account number for login your Account => "))
            
            while(AccNo > len(Bank) - 1 or Bank[AccNo] == None):
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                print("You enter invalid Account number plese enter correct Account number")
                AccNo = int(input("Enter your Account number for login your Account => "))
            
            if(AccNo == 0):
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                print("This Key is of Bank Admin you don't have acess with this key")
                continue

            while(1):
                HDFC.Help()
                Opt = input("Enter the Option => ")
                
                if(Opt.upper() == "COUSTOMERINFO"):
                    Bank[AccNo].CoustomerInfo()
                elif(Opt.upper() == "DISPLAYBALANCE"):
                    Bank[AccNo].DisplayBalance()
                elif(Opt.upper() == "DEPOSITE"):
                    print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                    Depo = int(input("Enter Amount that you want to Deposite => "))
                    Bank[AccNo].Deposite(Depo)
                elif(Opt.upper() == "WIDRAWL"):
                    print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                    Widra = int(input("Enter Amount that you want to widrawl => "))
                    Bank[AccNo].Widrawl(Widra)
                elif(Opt.upper() == "LOGOUT"):
                    Bank[AccNo].Logout()
                    break
                elif(Opt.upper() == "UPDATE"):
                    print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                    print("If you want to update name enter 'NAME'")
                    print("If you want to update age enter 'Age'")
                    print("If you want to update mobile no enter 'MONO'")
                    print("*%-------------------------------------------------------------------------------------------------------------------------%*")

                    Upd = input("Enter field that you want to update => ")
                    if(Upd.upper() == "NAME"):
                        var = input("Enter updated name => ")
                        Bank[AccNo].UpdateCoustamerInfo(A = var)
                    elif(Upd.upper() == "AGE"):
                        var = int(input("Enter updated Age => "))
                        Bank[AccNo].UpdateCoustamerInfo(B = var)
                    elif(Upd.upper() == "MONO"):
                        var = int(input("Enter updated Mobile number => "))
                        while(len(str(var)) != 10):
                            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                            print("Plese enter valid mobile number")
                            var = int(input("Enter updated Mobile number => "))
        
                        Bank[AccNo].UpdateCoustamerInfo(C = var)
                    else:
                        print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                        print("you enter wrong field")
                else:
                    print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                    print("Plese enter valid field")

        elif(Str.upper() == "APPLYLOAN"):
            HDFC.ApplyLoan()

            TLoan = input("Enter type of Loan you Want => ")

            if(TLoan.upper() == "HOME"):
                HDFC.HomeLoan()
            elif(TLoan.upper() == "CAR"):
                HDFC.CarLoan()
            elif(TLoan.upper() == "EDUCATION"):
                HDFC.EducationLoan()
            elif(TLoan.upper() == "BUSINESS"):
                HDFC.BusinessLoan()
            else:
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                print("We dont have this type of loan")
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")

            print("If you want Loan the contact our loan section")
            print("Thank you")

        elif(Str.upper() == "KYC"):
            HDFC.kyc()

            print("Do KYC of your Account on Following Domain")
            print("www.kycindia.com")
            
        elif(Str.upper() == "DEACTIVATE"):
            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            Deac = int(input("Enter your Account number for Deactivate your Account => "))

            while(Deac > len(Bank) - 1):
                print("*%-------------------------------------------------------------------------------------------------------------------------%*")
                print("You enter invalid Account number plese enter correct Account number")
                Deac = int(input("Enter your Account number for deactivate your Account => "))
                
            if(Bank[Deac].Balance != 0):
                Bank[Deac].DisplayBalance()
                print(Bank[Deac].Balance," RS Sucessfully widrawl from your Account...")

            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            Bank[Deac] = None
            print("Your Account Deactivate Sucessfully...")
            print("If you want, then Creat Account Again in HDFC")
            print("Thank you")
        
        elif(Str.upper() == Bank[0]):
            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            print("Admin Down Server of HDFC portal")
            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            break

        else:
            print("*%-------------------------------------------------------------------------------------------------------------------------%*")
            print("Plese enter valid Option")
            

if __name__ == "__main__":
    main()