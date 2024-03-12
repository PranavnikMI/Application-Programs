# multiprocessing application

import multiprocessing
import os

print("----Marvellous Infosystems by piyush khairnar----")

print("Demonstration of Multiprocessing")

def fun(number):
    print("Parent process of fun : ",os.getppid())
    print("process id of fun : ",os.getpid())
    for i in range(number):
        print(i)

def gun(number):
    print("Parent process of gun : ",os.getppid())
    print("process id of gun : ",os.getpid())
    for i in range(number):
        print(i)

def main():
    print("Total cores available : ",multiprocessing.cpu_count())

    print("Parent process of main : ",os.getppid())
    print("process id of main : ",os.getpid())

    number = 3
    
    p1 = multiprocessing.Process(target = fun, args=(number,))
    p2 = multiprocessing.Process(target = gun, args=(number,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

if __name__ == "__main__":
    main()