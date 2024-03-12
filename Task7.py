# List

def main():
    Data = [10,20,30,40,50]

    print(Data[1:3])
    print(Data[1:])
    print(Data[:4])

    Data.append(60)
    print(Data)
    Data.remove(60)
    print(Data)

    Data.insert(2,151)
    print(Data)
    Data.pop()
    print(Data)
    Data.pop(2)
    print(Data)

    Var = [11,21,51,101]
    Combo = [Data,Var]
    print(Combo)

    del Var[1:3]
    print(Var)

    Var.extend([151,171,201])
    print(Var)

    Var.sort()
    print(Var)

    print(151 in Var)

if __name__ == "__main__":
    main()