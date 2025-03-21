def connect(number, indexes):
    temp = number[indexes[0]:indexes[1]]
    temp += (number)
    return temp
number = (1,2,3,4,5)
indexes = (1,3)
output = connect(number, indexes)
print(output)