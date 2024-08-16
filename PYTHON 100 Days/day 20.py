def sum(a,b):          #function declaration and defination // def is used and indentation
    print("Sum is = ", a+b)

a = int(input("Enter a = "))
b = int(input("Enter b = "))
sum(a,b)           #function calling

print("\n\n")

def swap(a,b):      #function declaration
    # temp=a
    # a=b
    # b=temp
    a,b=b,a
    print("a after swapping = ",a)
    print("b after swapping = ",b)

a=input("a before swapping = ")
b=input("b before swapping = ")
swap(a,b)       #function call

