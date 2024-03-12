
def Minimum(A,B):
    if(B < A):
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

    Min = Data[0]
    for j in range(len(Data)):
        Min = Minimum(Min,Data[j])
    
    print("Min no in list is : ",Min)

if __name__ == "__main__":
    main()