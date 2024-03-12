# set

def main():
    Data = {10,20,30,40,50}
    print(Data)

    Data.add(60)
    print(Data)
    Data.remove(60)
    print(Data)
    Data.discard(50)
    print(Data)
    
    print(20 in Data)
    
if __name__ == "__main__":
    main()