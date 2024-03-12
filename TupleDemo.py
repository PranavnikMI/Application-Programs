print("Demonstration of Tuple")

Tuple1 = (11,"Hello",90.89,False)
print(Tuple1)
print(type(Tuple1))
print(len(Tuple1))

print(Tuple1[1])

#Tuple1[0] = 12     NA
#print(Tuple1)

#Tuple1.append(67)  NA

Tuple2 = (11,89,11,67,11)
print(Tuple2)


for Value in Tuple2:
    print(Value)

for i in range(len(Tuple2)):
    print(Tuple2[i])