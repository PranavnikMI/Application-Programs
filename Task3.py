# Serial Programming application

def square(n):
    return (n*n)

def main():
    arr = [1,2,3,4,5]

    result = []

    for num in arr:
        result.append(square(num))

    print(result)

if __name__ == "__main__":
    main()