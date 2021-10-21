x = 5

def foo():
  global x
  x = x - 1
  print("x inside:", x)


foo()
print("x outside:", x)