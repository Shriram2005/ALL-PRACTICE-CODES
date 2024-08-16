#tuple
#tuple cannot be changed
tup=(1,53,35,22,64)     #tuple is declared in ()  brackets
print(type(tup),tup)

print(tup[0])       #printing tuple is same as list
print(tup[1])
print(tup[2])
print(tup[-1])

if 53 in tup:
    print("53 is present")
else:
    print("53 is not present")