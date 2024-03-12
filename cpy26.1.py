
def main():
    str = input("Enter String : ")

    Arr = list(str)

    for i in range(len(Arr)):
        if(ord(Arr[i]) >= 65 and ord(Arr[i]) <= 90):
            Arr[i] = chr(ord(Arr[i]) + 32)
        print(Arr[i], end = "")

    
if __name__ == "__main__":
    main()