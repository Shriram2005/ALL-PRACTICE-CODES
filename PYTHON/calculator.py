first=input("Enter the firsr number = ")
operator=input("Enter operator( + , - , * , / , % ) = ")
second=input("Enter the second number = ")

first=int(first)
second=int(second)

if operator =="+":
    print("Answer is ",first+second)

elif operator=="-":
    print("Answer is ",first-second)

elif operator=="/":
    print("Answer is ",first/second)

elif operator=="*":
    print("Answer is ",first*second)

elif operator=="%":
    print("Answer is ",first%second)

else:
    print('invalid input')
