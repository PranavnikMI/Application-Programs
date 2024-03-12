import datetime
import schedule
import time

def Schedule_Minute():
    print("Schdular schedule after a minute...")
    print("Current time is : ",datetime.datetime.now())

def Schedule_Hour():
    print("Schdular schedule after a hour...")
    print("Current time is : ",datetime.datetime.now())

def Schedule_Sunday():
    print("Schdular schedule after Sunday...")
    print("Current time is : ",datetime.datetime.now())

def main():
    print("Automations using Python")

    schedule.every(1).minutes.do(Schedule_Minute)
    schedule.every().hour.do(Schedule_Hour)
    schedule.every().sunday.do(Schedule_Sunday)

    while True:
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()

# Command to install module(schedule)
# pip install schedule
# py -m pip install schedule