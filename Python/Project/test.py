import random

num = random.randint(0, 100)


# print(num)

numInput = input("input here")
# print(numInput)

while int(numInput) > num:
  print("too large")