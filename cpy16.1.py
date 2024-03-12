
def main():
    Size = int(input("Enter size of list : "))
    No = int(input("Enter number that you want to check in list : "))
    Value = 0
    Arr = list()
    Flag = False

    print("Enter member of list :")
    for i in range(Size):
        Value = int(input())
        Arr.append(Value)

    for i in range(len(Arr)):
        if(Arr[i] == No):
            Flag = True
            break

    if(Flag == True):
        print("List Contain given number")
    else:
        print("List do not contain given number")
        
if __name__ == "__main__":
    main()