# f-strings in python


name="Shriram"
sen=f"Hello guys my name is {name}"     #write f before starting the string , and {value} where you want to add another value
print(sen)
sen2=f"The valaue of 5*5 is = {5*5}"        #we can directly print the answer of calculations
print(sen2)

money= 49.99343
print(f"{name} have {money} rs in his bag")     #you can also do like this 
print(f"{name} have {money:.2f} rs in his bag")     #use money:.2f   to show only 2 digits after . in a number
print(f"{name} have {money:.3f} rs in his bag")         #shows 3 digits after point
