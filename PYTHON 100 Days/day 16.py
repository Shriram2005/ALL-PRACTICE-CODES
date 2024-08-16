# switch case in python
# match case
a=int(input("Enter a number = "))

match a:            # match is used in python 
    case 1:         # all case will be checked
        print("You have entered 1")
    case 2:
        print("You have entered 2")
    case 3:
        print("You have entered 3")
    case 4:
        print("You have entered 4")
    case 5:
        print("You have entered 5")
    case _ if a>=6 and a<=10:                #default /else      #only one from default will run if multiple default
        print("Its between 5-10")
    case _ if a>=11 and a<=15:
        print("Its between 11-15")
    case _ if a>=16 and a<=20:
        print("Its between 16-20")
    case _ :                    #default..
        print("Its not between 1-20 ...")

