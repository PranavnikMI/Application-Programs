# tuple

def main():
    Data = (10,20,30,40,50)

    print(Data[1:3])
    print(Data[1:])
    print(Data[:4])

    print(20 in Data)

    del Data
    
if __name__ == "__main__":
    main()