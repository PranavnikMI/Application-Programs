import os

def main():
    print("Enter the name of file that you want to open for reading perpose : ")
    File_name = input()

    if os.path.exists(File_name):
        fobj = open(File_name,"r")         # read mode
        if fobj:
            print("File succesfully opened in read mode")
            
            print("Data from file is")
            for line in fobj:
                print(line)

            fobj.close()
        else:
            print("Unable to open file")
    else:
        print("There is no such file")

if __name__ == "__main__":
    main()