#tuples
#you cant change values in tuples, convert the tuples to list and then again to tuples to change its value

tuple1=("shriram","atharva","aditya")
list1=tuple1.count("shriram")       #.count is used to count the number of ocurances of the element in tuple
print(list1)

list2=tuple1.index("atharva")       # .index is used to get the index of the value in it
print(list2)
list3=tuple1