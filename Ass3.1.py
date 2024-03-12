
def Add(A,B):
    return A+B

def main():
    Length = int(input("Enter Number of element that you want in List : "))
    Data = list()
    Sum = 0

    print("Enter the element :")
    for i in range(Length):
        Temp = int(input())
        Data.append(Temp)

    for j in range(len(Data)):
        Sum = Add(Sum,Data[j])
    
    print("Addition of all elements is : ",Sum)

if __name__ == "__main__":
    main()