from PIL import Image
import requests


def rgb_of_pixel(img_path, x, y):
  # im = Image.open(img_path).convert('RGB')
  # # url = 'https://43gxb0p4pappbbvzy1l841ck-wpengine.netdna-ssl.com/wp-content/uploads/2019/02/65658_341645209291043_1161942505_n-1-150x150.jpg'
  # # im = Image.open(requests.get(url, stream=True).raw)
  # r, g, b = im.getpixel((x, y))
  # a = (r, g, b)
  # return a

  img_target = Image.open(img_path)
  img_target_rgb = img_target.convert("RGB")
  rgb_val = img_target_rgb.getpixel((x, y))
  return rgb_val
  # print(rgb_val)

# Run Python command
img = "color_pad.jpg"
print("The size of image: ", Image.open(img).size)
# img_x = int(input("Enter the x coordinate:"))
# img_y = int(input("Enter the y coordinate:"))
#
# rgb_of_pixel(img, img_x, img_y)

x = y = 0
for i in range (1, 600, 10):
  x += 1
  y += 1
  print(i, ": ", rgb_of_pixel(img, x, y))