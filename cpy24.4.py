
def main():
    Sym = input("Enter Symbol : ")

    if((ord(Sym) >= 33 and ord(Sym) <= 47) or (ord(Sym) >= 58 and ord(Sym) <= 64) or (ord(Sym) >= 91 and ord(Sym) <= 96) or (ord(Sym) >= 123 and ord(Sym) <= 126)):
        print("Special Symbol")
    else:
        print("Not Special Symbol")

if __name__ == "__main__":
    main()