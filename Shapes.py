import math
class PlainPizza:
    def __init__(self):
        self.toppings = []
class OlivesMixin:
    def add_olives(self):
         print("Adding olives!")
         self.toppings += ['olives']
class SistersPizza(OlivesMixin, PlainPizza):
    def prepare_pizza(self):
         self.add_olives()

class GeometricShape:
    def __init__(self,area,lenght):
        self.area=area
        self.lenght=lenght
    def detailsShape(self,type):
        print(str(type)+"\nArea= "+str(self.area)+" Lenght= "+str(self.lenght))

class Rectangle(GeometricShape):
    def __init__(self,lengthEdge,widthEdge):
        super().__init__(lengthEdge*widthEdge,2*lengthEdge+2*widthEdge)
        self.lengthEdge=lengthEdge
        self.widthEdge=widthEdge
    def detailsShape(self):
        super().detailsShape("Rectangle")
    def detailsShapeWithType(self,type):
        super().detailsShape(type)


class Square(Rectangle):
    def __init__(self,edge):
        super().__init__(edge,edge)

    def detailsShape(self):
       self.detailsShapeWithType("Square")


class Triangle(GeometricShape):
    def __init__(self, baseEdge, rightEdge,leftEdge,hight):
         super().__init__((hight*baseEdge)/2,baseEdge+rightEdge+leftEdge)

    def detailsShape(self):
        super().detailsShape("Triangle")
class Circle(GeometricShape):
    def __init__(self, radious):
        super().__init__(radious*radious*math.pi,2*radious*math.pi)

    def detailsShape(self):
        super().detailsShape("Circle")

userPick=input("pick your shape -> t for triangle, r for rectangle, c for circle, s for squre : ")
if(userPick=='t'):
    baseEdge=int(input("add baseEdge: "))
    rightEdge=int(input("add rightEdge: "))
    leftEdge=int(input("add leftEdge: "))
    hight=int(input("add hight:"))
    myShape=Triangle(baseEdge,rightEdge,leftEdge,hight)
elif(userPick=='r'):
    lengthEdge = int(input("add lengthEdge: "))
    widthEdge = int(input("add widthEdge:"))
    myShape = Rectangle(lengthEdge,widthEdge)
elif(userPick=='c'):
    radious = int(input("add radious: "))
    myShape = Circle(radious)
elif(userPick=='s'):
    edge = int(input("add edge: "))
    myShape = Square(edge)

myShape.detailsShape()






