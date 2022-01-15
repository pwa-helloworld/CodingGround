import turtle

turtle.getscreen()
turtle.speed(10)

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
