#watch again


# ses method
num1 = {1, 2, 34, 44}
num2 = {32, 1, 40, 4}

print(num1.union(num2))      #union prints all values from both sets without repitation
print(num1.intersection(num2))      #intersection prints common elements of both sets
#num1.update(num2)       #updates the values of num1 as num2 (adds missing elements to num1)
num2.intersection_update(num2)
print(num2)