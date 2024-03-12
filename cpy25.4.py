
def main():
    str = input("Enter String : ")
    Arr = list(str)
    Flag = False

    for i in Arr:
        if(i == 'A' or i == 'E' or i == 'I' or i == 'O' or i == 'U' or i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'):
            print("Vowel is there")
            Flag = True
            break
    
    if(Flag == False):
        print("Vowel is not there")

if __name__ == "__main__":
    main()