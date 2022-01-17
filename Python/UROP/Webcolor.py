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
