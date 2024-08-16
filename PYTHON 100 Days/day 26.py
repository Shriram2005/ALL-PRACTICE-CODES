import time

name=input("Enter your name : ").title()        #  .title()  makes the firsr letter capital while input

hour = int(time.strftime('%H'))         #gets the current time(hour) and stores in hour

if(hour>=6 and hour <12):
    print("Good Morning",name,"Sir...")
elif(hour>=12 and hour<16):
    print("Good Afternoon",name,"Sir...")
elif(hour>=17 and hour<=8):
    print("Good Evening",name,"Sir...")
else:
    print("Good Night",name,"Sir...")

#comes form day 15