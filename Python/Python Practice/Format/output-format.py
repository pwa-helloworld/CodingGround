# Init var
a = 123
b = 123.456
c = "HelloWorld"

### Print without new line:
print("==================================")
print("Print without new line:")

print(a, end = ' ')
print(b, end = ' ')
print(c)

print("==================================")

### Print formating:
print("==================================")
print("Print formating:")

print(format(a, '5d')) # if using format(): defalue stay right
print(format(b, '10.2f')) # d -> integer; f -> floar; s -> string; data types must match variable
print(format(c, '<20s')) # using '<' to stay left; '>' to stay ritgh (default)
print(format(a, '<20d'), format(b, '5f'))

print("==================================")

### Use % format:
print("==================================")
print("Use '%' format:")

print('|%5d|'% (a)) # default stay right
print('|%10.2f|'% (b))
print('|%-20s|'% (c)) # add '-' to stay left
print('|%-20d'% (a), '%5f|'% (b))
print('|%-20d %5f|'% (a, b)) # alternative expression

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")

### 
print("==================================")
print("")

print("==================================")