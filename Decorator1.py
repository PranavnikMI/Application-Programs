

def Sub(A,B):
    if(B > A):
        A,B = B,A
        
    return A-B

def main():
    Ret = Sub(10,7)
    print("Subtraction is : ",Ret)

    Ret = Sub(7,10)
    print("Subtraction is : ",Ret)

if __name__ == "__main__":
    main()