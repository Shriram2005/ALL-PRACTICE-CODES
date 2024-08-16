user1 = {
    "name": "person1",
    "accountNo": 77,
    "pass": 2005
}
user2 = {
    "name": "person2",
    "accountNo": 32,
    "pass": 3849
}
user3 = {
    "name": "person3",
    "accountNo": 2345239503,
    "pass": 2389
}


user = input("Enter your account No :")
pass1 = input("Enter your password :")

users = [user1, user2, user3]
for i in users:
    if (user == i["name"]):
        print(i["accountNo"])
    else:
        print("User not found")




