balance = 500  # default balance
pass1 = 2005  # default password

while 1:
    tempPass = int(input("Enter the password : "))
    if (pass1 == tempPass):
        while 1:
            print(
                "\nChoose a option : \n1] Check Balance\n2] Withdraw\n3] Add Money\n4] Change Pin\n5] Exit\n"
            )
        
            choice = int(input("Enter the choice : "))
            if (choice == 1):
                print("Your balance is : ", balance, "\nThank You !")
                zz = input('')
            elif (choice == 2):
                withdraw = int(input("Enter amount to withdraw : "))
                if(withdraw > balance):
                    print("Insufficient Amount..Try again with less amount")
                    zz = input('')
                else:
                    balance = balance - withdraw
                    print("Your updated balance is : ", balance)
                    zz = input('')
            elif (choice == 3):
                addMoney = int(input("Enter amount to add : "))
                balance = balance + addMoney
                print("Your Updated Balance is :", balance)
                zz = input('')
            elif (choice == 4):
                tempPass = int(input("Enter Your old password : "))
                if (pass1 == tempPass):
                    if (tempPass == pass1):
                        tempPass2 = int(input("Enter New Password : "))
                        tempPass3 = int(input("Confirm New Password : "))
                        if (tempPass2 == tempPass3):
                            pass1 = tempPass2
                            print("Password Successfully Changed...!")
                            zz = input('')
                        else:
                            print("Password Does not match\nTry again...")
                else:
                    print("Incorrect Password...\nTry again!")
            elif (choice == 5):
                print("Thank You ! Visit Again....")
                zz = input('')
                break
            else:
                print("Invalid Choice...Try again!")
                zz = input('')
    else:
        print("Incorrect Password!...Try again!")
