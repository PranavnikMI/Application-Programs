
#Inbuilt Function (We cannot modify the contents)
def Sub(A,B):           # 0x100
    return A-B

# Decorator
def SmartSub(FPTR):     # 0x200
    def Inner(A,B):     # 0x300
        if(A<B):
            A,B = B,A
        return FPTR(A,B)     # return 0x100
    return Inner             # return 0x300

def main():
    SubX = SmartSub(Sub)    # 0x200(0x100)

    Ret = SubX(10,7)        # 0x300(10,7)
    print("Subtraction is : ",Ret)

    Ret = SubX(7,10)        # 0x300(7,10)
    print("Subtraction is : ",Ret)

if __name__ == "__main__":
    main()