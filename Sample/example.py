"""
This is a multi-line comment.
"""
import re  # This is a single-line comment.

greeting = "Hello, World!" 
PI = 3.14  
regex = re.compile('[A-Z]')

def greet(name):
    print(greeting + " " + name + ".")

class Circle:
    def __init__(self, radius):
        self.radius = radius

    def get_area(self):
        return PI * self.radius * self.radius

my_circle = Circle(5)

list = [1, 2, 3, 4, 5]

dict = {"name": "John"}

if my_circle.get_area() > 20:
    print("Large circle.")
else:
    print("Small circle.")

for i in list:
    print(i)
