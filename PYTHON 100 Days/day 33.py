#dictionary in python
#a dictionary can store any datatype
# here bofore semicolen is key and after semicolen id vlaue
dict = {                    #declaration of a dictionary //syntax
    'name': 'shriram', 'age': 17, 'eligible': 'true'
}

print(dict)     #printing all items form a dictionary as it is 

print(dict['name'])     #accessing single items from dictionary
print(dict.get('age'))      #  .get()   will print none if the item is not found in dictionary

print(dict.keys())        #print all keys from dictionary
print(dict.values())        #print all values from dictionary

print(dict.items())     #prints the key and value pairs in dictionary

for key in dict.keys():
    print(f"The value of {key} is =  {dict[key]}")          #prints key and value using f strings and loop