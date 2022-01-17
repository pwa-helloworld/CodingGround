from PIL import Image

def rgb_of_pixel(img_path, x, y):
  im = Image.open(img_path).convert('RGB')
  r, g, b = im.getpixel((x, y))
  a = (r, g, b)
  return a

img = "D:\download.png"

x = y = 0
for i in range (200):
  x += 1
  y += 1
  print(i, ": ", rgb_of_pixel(img, x, y))