from PIL import Image
import requests

def rgb_of_pixel(img_path, x, y):
  im = Image.open(img_path).convert('RGB')
  # url = 'https://43gxb0p4pappbbvzy1l841ck-wpengine.netdna-ssl.com/wp-content/uploads/2019/02/65658_341645209291043_1161942505_n-1-150x150.jpg'
  # im = Image.open(requests.get(url, stream=True).raw)
  r, g, b = im.getpixel((x, y))
  a = (r, g, b)
  return a

img = "D:\Color_icon_red.png"


x = y = 0
for i in range (1, 1500, 300):
  x += 1
  y += 1
  print(i, ": ", rgb_of_pixel(img, x, y))