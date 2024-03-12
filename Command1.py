import sys

def main():
    print("Demonstration of Command line arguments")

    print("Number of command line arguments are : ",len(sys.argv))

    print(sys.argv[0])
    print(sys.argv[1])
    print(sys.argv[2])

if __name__ == "__main__":
    main()

# python Command1.py Marvellous 11