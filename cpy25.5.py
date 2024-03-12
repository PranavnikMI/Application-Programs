
def main():
    str = input("Enter string : ")
    Arr = list(str)
    rev = []

    for i in range((len(Arr))-1,-1,-1):
        rev.append(Arr[i])

    for j in range(len(rev)):
        print(rev[j], end = "") 

if __name__ == "__main__":
    main()