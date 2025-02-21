# ~~~~~~~~~~~~~~~~~~~~~~~~ Dictionary ~~~~~~~~~~~~~~~~~~~~~~~~ #
car = {
    'brand' : 'Ford',
    'model' : 'Mustang',
    'year'  : '1975'
}
#### Clear Dict ####
# car.clear()
# print(car)
#### Copy Dict ####
# dic2 = car.copy()
# print(dic2)
#### FromKeys Dict ####
# x = ('key1', 'key2', 'key3')
# y = (0,1,2)
# thisdict = dict.fromkeys(x, y)
# print(thisdict)
#### get Dict ####
# print(car.get('brand'))
#### items Dict ####
# print(car.items())
#### pop Dict ####
# car.pop('brand')
# print(car)
#### pop item Dict ####
# car.popitem() # pop to last key and value
# print(car)
#### setdefault Dict ####
# car.setdefault('type', 'VOLvo')
# print(car)
#### update Dict ####
# car.update({"color": "White"})
# print(car)
#### values Dict ####
# print(car.values())

# ~~~~~~~~~~~~~~~~~~~~ way to define Dictionary ~~~~~~~~~~~~~~~~~~~~ #
# # 1st way:
# car = {
#     'brand' : 'Ford',
#     'model' : 'Mustang',
#     'year'  : '1975'
# }
# print(car)
# # 2nd way:
# team = dict(
#     brand = 'Ford',
#     model = 'Mustang',
#     year  = '1975'
# )
# print(team)
# # 3rd way:
# cars = ([
#     ('brand' , 'Ford'),
#     ('model' , 'Mustang'),
#     ('year'  , '1975')
# ])
# print(cars)

# Important note
'''
as function can return 2 values
def fun():
    return 5,2
x,y = fun()
'''
# for x,y in car.items():
#     print(x,y)

# another note
'''
as name of dictionary is equivelent to name.keys()
'''
# for x in car:
#     print(x)
# for x in car.keys():
#     print(x)    

'''
as name of dictionary[index] is equivelent to name.values()
'''
# for x in car:
#     print(car[x])
# for x in car.values():
#     print(x)   


# ~~~~~~~~~~~~~~~~~~~~ Data time ~~~~~~~~~~~~~~~~~~~~ # 
# import datetime
# x = datetime.datetime.now()
# print(x.year)
# print(x.month)
# print(x.strftime("%A"))
# print(x.strftime("%B"))
# print(x.strftime("%d"))
# print(x.strftime("%y %B %d"))
# print(x.strftime("%y %B %d - %H:%M:%S"))

# ~~~~~~~~~~~~~~~~~~~~~~~ Math ~~~~~~~~~~~~~~~~~~~~~~~ #
import math
x = min(5,3,8,1,7)
print(x) 
x = max(5,3,8,1,7)
print(x) 
z = math.sqrt(9)
print(z)
x = abs(-6.24)
print(x)
x = pow(2,3)
print(x)
x = math.ceil(1.4)
print(x)
x = math.floor(1.4)
print(x)