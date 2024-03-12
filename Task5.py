
def Task(Arr,N):
    Brr = set()
    Crr = tuple()
    Drr = list()
    Err = list()
    Cnt = 1
    Ans = 0

    for i in range(N):
        for j in range(i+1,N):
            if(Arr[i] == None):
                break
            if(Arr[j] == None):
                continue
            if(Arr[i] > Arr[j]):
                Crr = (Arr[i],Arr[j])
            else:
                Crr = (Arr[j],Arr[i])
            Arr[i] = None
            Arr[j] = None
            Brr.add(Crr)

    print(Brr)

    for Value in Brr:
        Sum = Value[0] + Value[1]
        Drr.append(Sum)

    print(Drr)

    for i in range(len(Drr)):
        if(Drr[i] == None):
            continue
        for j in range(i+1,len(Drr)):
            if(Drr[i] == Drr[j]):
                Drr[j] = None
                Cnt = Cnt + 1
        Crr = (Drr[i],Cnt)
        Err.append(Crr)  
        Cnt = 1

    print(Err)

    for Value in Err:
        if(Value[1] > Ans):
            Ans = Value[1]

    return Ans

def main():
    N = int(input("Enter size of array : "))
    Arr = list()
    
    print("Enter element of list : ")
    for i in range(N):
        Value = int(input())
        Arr.append(Value)

    Output = Task(Arr,N)
    print(Output)

if __name__ == "__main__":
    main()