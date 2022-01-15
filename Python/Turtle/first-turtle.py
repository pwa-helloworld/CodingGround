import turtle

turtle.getscreen()
turtle.speed(10)

for j in range (20):
  turtle.color('red')
  for i in range (4):
    turtle.fd(100)
    turtle.rt(90)
  turtle.color('blue')
  turtle.rt(18)


turtle.done()
