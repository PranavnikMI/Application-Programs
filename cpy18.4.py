

def main():
    No = int(input("Enter number : "))

    for i in range(No,0,-1):
        if(i == No):
            print("#  ", end = "")
        if(i == 1):
            print(i," * ",end = "")
            break
        print(i,"  *  #  ", end = "")

if __name__ == "__main__":
    main()