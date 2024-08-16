# exercise

# Create a program capable of displaying questions to the user like KBC.
# Use list data type to store the questions and their correct answers.
# Display the final amount the person is taking home after playing the game.

print("\n\n_________________WELCOME TO KBC_________________\n\n")
ans = input("Are you ready to play this game ? (yes/no) ")
if (ans == "yes" or ans == 'Yes' or ans == 'YES'):
    name = input("Enter your name : ")
    input("Press enter to continue")
    name = name.upper()
    QN = 0
    print("\n\n", name, "JI YE RAHA APKA PEHLA SAWAL...")
    print("Who composed our National Anthem ?\n")
    Q1 = ["A)Rabindranath Tagore", "B)Sri Aurobindo Ghosh",
          "C)Bankimchandra Chatterjee", "D)Mohd Iqbal"]
    for i in Q1:
        print(i)
    ans1 = input("Enter Your Answer = ")
    if (ans1 == 'A' or ans1 == 'a'):
        print("\nCongratulations...Correct answer")
        money = "1 LAKH"
        QN = QN+1
    else:
        print("Sorry...Wrong answer")
    input("Press enter to continue\n")

    print(name, "JI YE RAHA APKA DUSRA SAWAL...")
    print("Who is the real owner of CodeWithHarry Youtube Channel ?\n")
    Q2 = ["A)Jethalal Gada", "B)Harry", "c)Carry Minati", "d)Gaurav Chaudhary"]
    for i in Q2:
        print(i)
    ans = input("Enter Your Answer = ")
    if (ans == 'B' or ans == 'b'):
        print("\nCongratulations", name, "...Correct Answer")
        money = "5 LAKH"
        QN = QN+1
    else:
        print("Sorry...Wrong answer")
    input("Press enter to continue\n")

    print(name, "JI YE RAHA APKA TISRA SAWAL...")
    print("Which of this is not a web browser ? \n")
    Q2 = ["A)Firefox", "B)Opera", "c)Facebook", "d)Chrome"]
    for i in Q2:
        print(i)
    ans = input("Enter Your Answer = ")
    if (ans == 'C' or ans == 'c'):
        print("\nCongratulations", name, "...Correct Answer")
        money = "10 LAKH"
        QN = QN+1
    else:
        print("Sorry...Wrong answer")

else:
    print("\nGame Is Over...Bhag ja Yaha Se\n\n")

input("Press enter to continue\n")
print(name, "Ji Aap Ke 3 me se", QN,
      "Jawab Sahi Hey..!!\nAur Aap Jeet Chuke Hey", money, "LAKH Rupaya...!!!")
