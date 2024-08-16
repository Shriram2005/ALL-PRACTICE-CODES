#strings
#strings are immutable
a="Shriram"
b="!!!!Shriram Hello!!!"
print(a.upper())    #makes string letters capital
print(a.lower())    #makes string letters lower
print(b.rstrip("!"))    #removes the elements from string  //only if it is at end
print(b.replace("Hello","Mange"))       #replace a word or string by another string
print(b.split(" "))     #split the words where there is space and forms list...
heading="this is a title"
print(heading.capitalize())     #first letter gets capital like a heading or para statt


str1="Welcome to the the python"

print(len(str1)) 
print(str1.center(50))      #adds spaces at starting and ending and takes the string at middle
print(str1.count("t"))      #count the number of the letter/word/string occurs
print(str1.count("the"))    #count the number of the letter/word/string occurs

print(str1.endswith("python"))      #check if the string ends with the given string // prints output in boolean form (1,0)  true or false
print(str1.endswith("ome",4,7))     #check if index[7] ends with ome.. starting from 4 //in this condition

print(str1.find("to"))      #finds index number where given string/word/letter it is available //starting index
print(str1.find("zzz"))      #if not available then it prints -1


str2="Welcome to the python classes"
print(str2.isalnum())       #is the string alphanumeric  //includes only 1-9 a-z A-Z  //returns true or false

str2="welcome to the python classes"
print(str2.isalnum())       #does the string include only a-z A-Z ? /not numbers //returns true or false

print(str2.islower())       #are all letters lower ? //prints true or false

print(str2.isupper())       #are all letters upper? // prints true or false

print(str2.istitle())       #is title capitalized?  //true or false

str3="\n"
print(str2.isprintable())       #are all characters in this string ptintable ?  //prints true or false
print(str3.isprintable())       #in str3 \n is not printable so it orints false


str4="      "
print(str4.isspace())       #is this string space?  //prints true of false


str6="Hey Its Me..."
print(str6.startswith("Hey"))       #does string starts with given letter/word/string?  //prints true or false

print(str6.swapcase())      #if letter is capital then makes it small and vice versa

str8="his Name is dan and He is a gamer"
print(str8.title())         #makes first letter capital of all words after spaces