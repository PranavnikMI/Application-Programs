import os
import fnmatch
from sys import *
import xlsxwriter

def ExcelCreate(name):
    workbook = xlsxwriter.Workbook(name)

    worksheet = workbook.add_worksheet()

    worksheet.write('A1','Name')
    worksheet.write('B1','College')
    worksheet.write('C1','Mail ID')
    worksheet.write('D1','Mobile')

    workbook.close()


def main():
    print("----Marvellous Infosystems----")

    print("Application name : ",argv[0])

    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This Script is used to create excel file and write data into it")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("usage : ApplicationName Name_of_file")
        exit()

    try:
        ExcelCreate(argv[1])

    except Exception:
        print("Error : Invalid input")

if __name__ == "__main__":
    main()