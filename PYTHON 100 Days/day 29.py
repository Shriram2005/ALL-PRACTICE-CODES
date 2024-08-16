# docstrings in python

s1="""Hello guys how are you"""     #special type of string just put after = 
print(s1)

def square(n):       # function defined
    '''This comment will be printed'''  #docstrings.. written just after functon name, or upside of function defination
    print(n*n)

square(5)       #function call
print(square.__doc__)       #print dockstrings using this format



#pep-8
#python enhancement poposal