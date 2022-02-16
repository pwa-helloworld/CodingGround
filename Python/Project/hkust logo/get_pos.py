import turtle

width = 600
height = 600


class ScreenSetup:
  def __init__(self, width, height):
    self.width = width
    self.height = height
  
  def create_screen(self):
    screen = turtle.getscreen()
    screen.setup(self.width, self.height)
    screen.title('Get Coordinates')
    # turtle.setworldcoordinates(0, 0, self.width, self.height) # set (0, 0) at the bottom left corner
    turtle.hideturtle()

  def draw_grid(self):
    turtle.speed(0)
    turtle.penup()
    turtle.goto(-self.width/2, 0)
    turtle.pendown()
    turtle.goto(self.width, 0)
    turtle.penup()
    turtle.goto(0, self.height)
    turtle.pendown()
    turtle.goto(0, -self.height/2)




def get_pos(i, j):
  turtle.penup()
  turtle.goto(i, j)
  # turtle.pendown()
  turtle.dot(5, 'red')

  print(turtle.pos())
  
  # turtle.write(str(i)+","+str(j))
  

def add_img():
  turtle.Screen().addshape('src/HKUST.gif')
  turtle.Turtle().shape('src/HKUST.gif')


# Run turtle

ScreenSetup(width, height).create_screen()
ScreenSetup(width, height).draw_grid()
turtle.getscreen().onclick(get_pos)
add_img()



# screen.mainloop()
turtle.done()