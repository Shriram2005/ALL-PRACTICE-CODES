marks=[70,75,66]
marks.append(99)    #to add new at last
print(marks,"\n")

marks.insert(0,69)  #to add new at any index
print(marks)

print(70 in marks)

print(len(marks),"\n")       #length //len

i=1
while i< len(marks):
    print(marks[i])
    i=i+1

print('\n')
marks.clear()       #clear string
print(marks)