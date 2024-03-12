# Parellel Programming application

import multiprocessing
import os

def square(n):
    print("Worker process id for {0} : {1}".format(n, os.getpid()))
    return (n*n)

def main():
    arr = [1,2,3,4,5]

    p = multiprocessing.Pool()
    result = p.map(square,arr)

    print("Square of each elements : ")
    print(result)
    

if __name__ == "__main__":
    main()