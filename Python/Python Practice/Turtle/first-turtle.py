import turtle

# turtle.getscreen()
screen = turtle.Screen()
screen.setup(500, 500)
screen.title('Turtle Screen')

turtle.speed(5)

for i in range (20):
  if (i % 2) == 0:
    turtle.color('blue')
  else:
    turtle.color('red')
    
  for j in range (4):
    turtle.fd(100)
    turtle.rt(90)
  turtle.rt(18)


turtle.done()
