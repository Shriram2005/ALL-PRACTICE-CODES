# elemnets in dictionaries are changable
# dictionaries do jot allow duplicates
# if two keys are same , then the last key's value will be applied

marks = {
    "physics": 44,
    "chemistry": 68,
    "maths": 68,
    "cs": 80,
    "bio":"Fail",    #we can store any datatype in dictionary 
    "pass":True
}

print(marks)    # this will print full dictionary

marks["cs"] = 88    #updating values of specific keys
print(marks["cs"])  #print specific values using keys

print(marks["bio"])
print(len(marks)) 

print(type(marks))






# extra  zzzzzzzzzz
# (marks['pass'] == True) ? pritn("You are passed"):print("You are fail"))
