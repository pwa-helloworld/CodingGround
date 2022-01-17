<<<<<<< HEAD
# from PIL import Image

# filename = "../sample.jpg"
# img = Image.open(filename)
# img.show() 

import imageio
import matplotlib.pyplot as plt

pic = imageio.imread("D:\Windows 10\OneDrive\OneDrive - HKUST Connect\GitHub\CodingGround\Python\UROP\sample.jpg")
plt.figure(figsize = (15, 15))
plt.imshow(pic)
=======
#import webcolors

def color_tuple_to_string(rgb):
        # try to convert to an english name
  try:
    return webcolors.rgb_to_name(rgb)
    print(webcolors.rgb_to_name(rgb))
  except Exception:
            #print e
    pass
  return str(rgb)

color_tuple_to_string(000000)
>>>>>>> 131382c615903de8b544993f189c3648927df660
