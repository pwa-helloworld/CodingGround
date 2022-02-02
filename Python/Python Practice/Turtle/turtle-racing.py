import turtle
from matplotlib.pyplot import get

class ScreenSetup:
  def __init__(self, width, height):
    self.width = width
    self.height = height
  
  def create_screen(self):
    screen = turtle.getscreen()
    screen.setup(self.width, self.height)
    screen.title('Turtle Racing')

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

get_number_of_racer()
ScreenSetup(500, 500).create_screen()


# print(get_number_of_racer())





turtle.done()


