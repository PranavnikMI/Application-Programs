from functools import reduce

def main():
    Data = []
    print('Enter number of elements : ')
    Size = int(input())

    print("Enter the elments : ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
    
    print(int(reduce(lambda A,B : A+B,map(lambda No : No+2,filter(lambda No : (No % 2 == 0),Data)))))

if __name__ == "__main__":
    main()