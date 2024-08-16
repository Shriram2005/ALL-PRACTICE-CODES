# we can use else after loops also 

for i in range(5):
    print(i)
else:                       # print the else when the loop condition is false/over
    print("Loop is over now")

for i in range(5):
    print(i)
    if (i==3):
           break;       # break loop in middle will not work else
else :
    print("2nd loop is over now ")