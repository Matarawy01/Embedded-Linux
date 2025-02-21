# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ String ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
name = "abdelRahman"
print(name.capitalize())

name = "abdelRahman matarawy"
print(name.upper())

name = "ABDELRAHMAN MATARAWY"
print(name.casefold())
print(name.lower())

name = "AbdelRahman"
print(name.center(36,'*'))

name = "abdelRahman"
print(name.count('a'))

name = "abdelRahman"
encoded_STR = name.encode('utf-8')
print(type(encoded_STR))
print(encoded_STR)
decoded_STR = encoded_STR.decode('utf-8')
print(type(decoded_STR))
print(decoded_STR)

name = "AbdelRahman Matarawy"
print(name.endswith('Matarawy'))
print(name.startswith('AbdelRahman'))

name = "AbdelRahman Matarawy"
print(name.find('Matarawy'))
print(name.find('a',2))

name = "AbdelRahman\tMatarawy"  # mis_understand
print(name.expandtabs())
print(name.expandtabs(2))
print(name.expandtabs(15))

''' strip used to delete spaces as if you enter the name with space but correct name
    the if condition will give false '''
#name = input("Enter your name: ") 
if name.strip().lower() == 'abdelrahman matarawy':
    print('You Enter The correct name')
else:
    print('you enter wrong name')

name = "abdelRahman"
print(name.replace('a', 'A'))
print(name.replace('a', 'A',1))

name = "abdelRahman Matarawy"
print(name.split())
name = "abdelRahman,Matarawy"
print(name.split(','))


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ print ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
age = 21; name = "AbdelRahman"
print("Name {} and Age {}".format(name, age))
print("age {1} and Name {0}".format(name, age))
print(f"Name {name} and Age {age}")
print('Name', name, 'Age', age)
print("name %s and Age %d"%(name, age))
raw_s = r'Hello "Matarawy"'
print(raw_s)

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ join ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
name = ['AbdelRahman', 'Matarawy', 'Sayed']
print(" ".join(name))
print(", ".join(name))


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Functions ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# Normal Void
def My_Fun():
    print("Hello Matarawy")
My_Fun()

def My_Fun(name):
    print("Hello {}".format(name))
My_Fun('matarawy')

# Normal Return
def My_Fun(num):
    return num * 2
print(My_Fun(5))

# assign Value as parameter
def My_Fun(child3, child2, child1):
    print(f"The Child1 is {child1}")
    print(f"The Child2 is {child2}")
    print(f"The Child3 is {child3}")
My_Fun(child1 = "Ali", child3 = "Ahmed", child2 = "Samy")
#My_Fun("Ali", child1 = "Ahmed", "Samy") this give error, you should define parameter before initilized 

# Default value function
def My_Fun(Country = "Germany"):
    print(Country)
My_Fun("Egypt")
My_Fun()

# Variadic Function and assign parameter (tuple)
def Tuple_Test(*arg):
    print(arg[0])
    print(arg[1])
    print(arg[2])
    print(type(arg))
Tuple_Test(1, "Ali", 2)
Tup = (1,2,3)
Tuple_Test(*Tup)

# Variadic Function and assign parameter (Dictionary)
def Dic_Test(**arg):
    print(arg['Name'])
    print(arg['Age'])
    print(arg['Study'])
    print(type(arg))
Dic = {
    "Name" : "AbdelRahman",
    'Age'  : 21,
    'Study': 'Eng'
}
Dic_Test(**Dic)
Dic_Test(Name = "AbdelRahman", Age = 21, Study = 'Eng')


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Global Variable ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
x = 555
def My_Func():
    x = 111
    print(id(x))
    print(x)
My_Func()
print(id(x))
print(x)

x = 777
def My_Func():
    global x
    x = 222
    print(id(x))
    print(x)
My_Func()
print(id(x))
print(x)


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ lambda Function ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
x = lambda a:a*10
print(x(2))
x = lambda a,b:a*b
print(x(2,3))
ls1 = [0,1,2,3,4,5,6,7,8,9,10]
print(list(filter(lambda x:x%2 == 0, ls1)))
ls2 = [1,2,3,4]
print(list(map(lambda x:x*x, ls2)))


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Sort ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
ls1 = [12,5,3,7,1,9]
ls1.sort()
print(ls1)


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Module ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
import src.Calc
print(src.Calc.sum(5,4))
print(src.Calc.sub(5,4))
print(src.Calc.mult(5,4))
print(src.Calc.div(20,4))
import src.Calc as MODULE
print(MODULE.sum(4,2))


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Garbage Collector ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
ls1 = [1,2,3,4]
print(id(ls1))
ls1.append(5)
print(id(ls1))
print(ls1)
ls1 = [1,2,3]
print(id(ls1))

# Copy data
ls1 = [1,2,3,4]
ls1.append(5)
ls = ls1
ls.append(2)
print(ls1, ls)

# Deeply copy
ls1 = [1,2,3,4]
ls1.append(5)
ls = ls1.copy()
ls.append(2)
print(ls1, ls)