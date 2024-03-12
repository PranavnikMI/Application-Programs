import psutil

def ProcessDisplay():
    listprocess = []
    
    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs=['pid', 'name', 'username'])
            
            listprocess.append(pinfo)
        
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
    
    return listprocess

def main():
    print("Marvellous Infosystems : Python Automation & Machine Learning")

    print("Process Monitor")
    
    listprocess = ProcessDisplay()

    iCnt = 0
    for elem in listprocess:
        iCnt = iCnt + 1
        print(elem)

    print("Number of running process are : ",iCnt)

if __name__ == "__main__":
    main()






