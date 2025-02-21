# ~~~~~~~~~~~~~~~~~~~~~~~~ Break Tuple ~~~~~~~~~~~~~~~~~~~~~~~~ #
Fruits = ("Apple", 'Banana', 'Cherry', 'Orange', 'Kiwi', 'Mango')
(green,yellow, *red) = Fruits #Green -> Apple, Yellow -> Banana, red-> tuple of list until end 
print(green, yellow, red) 
(green,*yellow, red) = Fruits #Green -> Apple, Yellow -> tuple of list until end , red-> Mango
print(green, yellow, red) 

# ~~~~~~~~~~~~~~~~~ Tuple join, count, index ~~~~~~~~~~~~~~~~~ #
# Join two tuple
tuple1 = ('a', 'b', 'c',1,2,3, [4,5,6])
tuple2 = (11,12,13)
tuple3 = tuple1 + tuple2
print(tuple3)
# repeat Tuple
color = ('Red', 'Blue', "green")
print(color * 2)
# Count 
numbers = (1,2,3,4,5,1,1,1)
print(numbers.count(1))
# Index
numbers = (1,2,3,4,5,1,1,1)
print(numbers.index(5))

# ~~~~~~~~~~~~~~~~~~~~~~~~ Set ~~~~~~~~~~~~~~~~~~~~~~~~ #
SET1 = {'apple', 'orange', 'banana'}
print(SET1) # Focus on that data not arranged 
print(len(SET1))
# loop on set
for i in SET1:
    print(i)
# Find element in SET
print("apple" in SET1)
# Update Set
SET1.add('Mango')
print(SET1) 
# update set with  more that element 
SET1.update(['ORANGE', "RED", 'BLUE'])
print(SET1) 
# Remove
SET1 = {'apple', 'orange', 'banana'}
SET1.remove('apple')
print(SET1) 
# POP
SET1 = {'apple', 'orange', 'banana'}
print(SET1.pop()) # pop mean decrease units
print(SET1)
# Differance 
SET1 = {'apple', 'orange', 'banana'}
SET2 = {'apple', 'KIWI', 'banana'}
print(SET1.difference(SET2))
print(SET2.difference(SET1)) 
# Intersection 
SET1 = {'white', 'orange', 'blue'}
SET2 = {'black', 'red', 'orange'}
print(SET1.intersection(SET2))
