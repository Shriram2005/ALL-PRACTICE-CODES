dict1={'h1':37,'h3':65,'h7':85}     #dictionaty declaration
dict2={'a5':77,'a9':48}

dict1.popitem()     #removes the last item from the dictionaty 
print(dict1)

del  dict2          # dict2 will be deleted //you need to define it again
# print(dict2)

del dict1['h1']     # deletes the given element from dictionary /if value is specified in [] bracktes
print(dict1)
