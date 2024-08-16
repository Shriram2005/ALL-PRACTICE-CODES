# lists in python


# number=[11,22,33,44,55]
# for i in number:
#     print(i)

names = ["book", "televison", "table", "scale"]     # this is a list
for i in names:
    print(i)

print("\n")
print(type(names))      # type keyword is used to print type of variable

marks=[12,22,4.5,"shriram",True]         # we can store different types of data into list(int,char,float,bool)
print(marks[0])
print(marks[1])
print(marks[2])
print(marks[3])
print(marks[4])


num=[11,22,33,44,55,66,77]
print(num[0:3])         #prints from 0 index to 2 index
                       #all same as strings refrence..day 12

print("\n")
num1=[12,43,23,54,32]
if 23 in num1:          #check whether 23 is present in list or not
    print("Yes")
else:
    print("No")
