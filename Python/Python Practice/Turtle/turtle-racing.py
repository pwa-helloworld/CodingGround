from hashlib import new
import turtle
import random
import time
from typing import NewType
# from matplotlib.pyplot import get
# from pyparsing import java_style_comment

# ---------- Global var ---------- #
turtleList = []
width = 600
height = 600
startingPoint = 50
endPoint = 550

class ScreenSetup:
  def __init__(self, width, height):
    self.width = width
    self.height = height
  
  def create_screen(self):
    screen = turtle.getscreen()
    screen.setup(self.width, self.height)
    screen.title('Turtle Racing')
    turtle.setworldcoordinates(0, 0, self.width, self.height) # set (0, 0) at the bottom left corner
    turtle.hideturtle()

def get_number_of_racer():
  racers = 0
  
  while True:
    racers = input('Enter the number of racers (2~10) ')

    if racers.isdigit():
      racers = int(racers)
      # break
    else:
      print('Error: Please enter an integer!')
      continue

    if 2 <= racers <= 10:
      print('Number of racers: ', racers)
      break
    else:
      print('Error: Please enter an integer within (2~10)!')
      
  return racers

def create_turtle():
  i = 0
  x = width / (racers + 1)
  turtleSize = turtle.turtlesize()
  
  for i in range(racers):
    newTurt = turtle.Turtle()

    newTurt.pencolor('white')
    newTurt.fillcolor('white')
    newTurt.penup()
    newTurt.goto(width / 2, height / 2)
    newTurt.pendown()
    newTurt.pencolor('black')
    newTurt.fillcolor('black')

    newTurt.shape('turtle')
    newTurt.setheading(90)
    newTurt.speed(0)

    newTurt.goto(x, startingPoint)
    print("x pos: ", x)  
    x += (width / (racers + 1))
    
    turtleList.append(newTurt)

    # time.sleep(1)


def draw_edge_line():
  print("Drawing edge line")

  startLine = turtle.Turtle()
  startLine.hideturtle()

  startLine.pencolor('white')
  startLine.fillcolor('white')
  startLine.penup()
  startLine.goto(0, startingPoint)
  startLine.pendown()
  startLine.pencolor('black')
  startLine.fillcolor('black')
  startLine.forward(width)
  startLine.speed(0)


  endLine = turtle.Turtle()
  endLine.hideturtle()

  endLine.pencolor('white')
  endLine.fillcolor('white')
  endLine.penup()
  endLine.goto(0, endPoint)
  endLine.pendown()
  endLine.pencolor('black')
  endLine.fillcolor('black')
  endLine.forward(width)
  endLine.speed(0)

def racing():
  print("Start racing")





racers = get_number_of_racer()
ScreenSetup(width, height).create_screen()
draw_edge_line()
create_turtle()

print(turtleList)
turtleList[2].fillcolor('blue')



turtle.done()


