import turtle
import random

turtle.screensize(1000,1000,'black')

turtle.speed(10)
cou=0
while cou<150:
  c1=random.randint(0,1)
  c2=random.randint(0,1)
  c3=random.randint(0,1)
  turtle.pencolor(c1,c2,c3)
  turtle.showturtle()
  turtle.left(36)
  turtle.forward(300)
  turtle.right(144)
  turtle.forward(300)
  turtle.right (144)
  turtle.forward (300)
  turtle.right(144)
  turtle.forward(300)
  turtle.right(144)
  turtle.forward(300)
  turtle.right(10)
  cou=cou+1

























turtle.done
