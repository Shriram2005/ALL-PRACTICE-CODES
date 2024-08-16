# dictionary methods

dict1={'h1':37,'h3':65,'h7':85}
dict2={'a5':77,'a9':48}

dict1.update(dict2)     #  .update() updates,copy the value of dictionary 1 to dictionary 2
print(dict1)
dict1.pop('h1')         # .pop() removes the given kay with value from the dictionary 
print(dict1)

dict2.clear()       #clears all the elements from the dictionary / makes empty dictionary 
print(dict2)
