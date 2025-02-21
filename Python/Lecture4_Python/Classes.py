# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Classes ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# class Person:
#     def __init__(self, name): #Constructor
#         self.name = name
#         print(f"{name} has been created")
    
#     def __del__(self): #Destructor
#         print(f"{self.name} has been deleted")

# p = Person("Matarawy")
# p2 = Person('Samy')

# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ DOC ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# class MyClass:
#     """
#     This is a simple example class to demonstrate docstring formating.

#     Attributes:
#         attribute1 (int): This is an example attribute that store an integer value.
#         attribute2 (str): This attribute store a string value.

#     Methods:
#         method1(): This method perfom some action and demonstrates how to document methods.

#     Examples:
#         >>> obj = MyClass()
#         >>> obj.method1
#         Action Completed. 

#     """

#     def __init__(self): 
#         """
#         Constructor for the MyClass class.
#         Initilizes the attributes attribute1 and attribute2.
#         """
#         self.attribute1 = 0
#         self.attribute2 = ""
#         print(f"{name} has been created")
    
#     def __del__(self): #Destructor
#         print(f"{self.name} has been deleted")

# obj = MyClass()


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Inheritance ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# class animal:
#     name = ""

#     def __init__(self, name):
#         print("Constructor animal is called")
#         self.name = name

#     def eat(self):
#         print("Eat Food")

#     def __del__(self):
#         print("Destructor animal is called")

# class cat(animal):
#     def __init__(self):
#         print("Constructor cat is called")

#     def sound(self):
#         print("meauu")

#     def __del__(self):
#         print("Destructor cat is called")

# mycat = cat()
# # Notes that inheritance mean you have access to parent and child
# mycat.eat()
# mycat.sound()


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Ordering of constructors ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
'''
Parent should be init first then deleted last thing so we recourse to ordering
'''
# class animal:
#     name = ""

#     def __init__(self, name):
#         print("Constructor animal is called")
#         self.name = name

#     def eat(self):
#         print("Eat Food")

#     def __del__(self):
#         print("Destructor animal is called")

# class cat(animal):
#     def __init__(self, name):
#         super().__init__(name)
#         print("Constructor cat is called")

#     def sound(self):
#         print("meauu")

#     def __del__(self):
#         print("Destructor cat is called")
#         super().__del__()


# mycat = cat('Hero')
# mycat.eat()
# mycat.sound()


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Private Member ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# class animal:
#     __m = 10
#     def __init__(self):
#         self.a   = "Public Member"

        
# MyAnimal = animal()
# print(MyAnimal.__m) # Error
# print(MyAnimal._animal__m)



# ~~~~~~~~~~~~~~~~~~~~~~~~~~~ Operate Overloading ~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
class point:
    def __init__(self, XCord, YCord):
        self.XCord = XCord
        self.YCord = YCord

    # Overload + operator
    def __add__(self, point_ov):
        print(f"self = {self.XCord}, {self.YCord}")
        print(f"point_ov = {point_ov.XCord}, {point_ov.YCord}")
        return point(self.XCord + point_ov.XCord, self.YCord + point_ov.YCord)
    
point1 = point(1,4)
point2 = point(5,8)
point3 = point1 + point2 # point1.__add__(point2)

print(point3.XCord)
print(point3.YCord)