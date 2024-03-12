# Array
import array as a

def main():
    Arr = a.array('i',[10,20,30,40,50])
    j = 0

    print(Arr)
    print(type(Arr))
    print(len(Arr))
    print(Arr.typecode)

    print("For loop in straight manner")
    for i in range(len(Arr)):
        print(Arr[i])
    
    print("While loop in straight manner")
    while(j < len(Arr)):
        print(Arr[j])
        j = j + 1

    print("For loop in Reverse manner")
    for k in range(1,len(Arr)+1,1):
        print(Arr[-k])
    
    Arr.reverse()
    print("Loop after reverse opration")
    for i in range(len(Arr)):
        print(Arr[i])

if __name__ == "__main__":
    main()