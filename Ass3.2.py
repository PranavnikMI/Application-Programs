
def Maximum(A,B):
    if(B > A):
        return B
    else:
        return A

def main():
    Length = int(input("Enter the elements that you want in list : "))
    Data = list()

    print("Enter the element :")
    for i in range(Length):
        Temp = int(input())
        Data.append(Temp)

    Max = Data[0]
    for j in range(len(Data)):
        Max = Maximum(Max,Data[j])
    
    print("Max no in list is : ",Max)

if __name__ == "__main__":
    main()