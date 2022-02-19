import pywhatkit as wts

try:
  wts.sendwhatmsg("+85291719229", "Test msg", 22, 49)
  print("Msg sent")

except:
  print("Error occured")
