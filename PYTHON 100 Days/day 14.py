# if else
#conditional operators :
# <,  >,  <=,  >=,  ==,  != 

age = int(input("Enter your age = "))           #take inpur in using int 
if(age >=31 and age<=100):
    print("You are more than 30")
elif (age >= 18 and age<=30):                   # elif is used in python instead of else if
    print("You are more then 18 and less then 30")
elif(age<18 and age>=12):
    print("You are less then 18")
elif(age<=11 and age>=1):
    print("You are less than 12")
else:
    print("Invalid age...")
print("This is outside the else.\n")


ans1=(input("Are you from Sandip University? (yes or no) : "))
if(ans1=='yes'):
    print("You are in sandip university")
    ans2=input("Enter your division of BCA = ")
    if(ans2=='a' or ans2=='A'):                 # nested if else
        print("You are in division A")
    elif(ans2=='b' or ans2=='B'):
        print("You are in divison B")
    elif(ans2=='c' or 'C'):                     #it can be also written directly after or 
        print("You are in divison C")
    else:
        print("Invalid division...")
else:
    print("You are not in Sandip University")

# name="shriram"
# if "shr" in name:         #check whether shr is present in name or not
#     print("Yes")
# else:
#     print("No")