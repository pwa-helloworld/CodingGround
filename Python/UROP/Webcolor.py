# from PIL import Image

# filename = "../sample.jpg"
# img = Image.open(filename)
# img.show() 

import imageio
import matplotlib.pyplot as plt

pic = imageio.imread("D:\Windows 10\OneDrive\OneDrive - HKUST Connect\GitHub\CodingGround\Python\UROP\sample.jpg")
plt.figure(figsize = (15, 15))
plt.imshow(pic)