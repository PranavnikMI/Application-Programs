
def main():
    ch = input("Enter Division : ")

    if(ch == 'a' or ch == 'A'):
        print("Your exam is at 7")
    elif(ch == 'b' or ch == 'B'):
        print("Your exam is at 8")
    elif(ch == 'c'or  ch == 'C'):
        print("Your exam is at 9")
    elif(ch == 'd' or ch == 'D'):
        print("Your exam is at 10")
    else:
        print("Division not exist")


if __name__ == "__main__":
    main()