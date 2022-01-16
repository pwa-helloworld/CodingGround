### User Input:
print("==================================")
print("User Input:")

a = input("Input a number: ")
print("Output: ", a)
# a += 3 this is error since input value defalut as string

a = eval((a)) # or use int(), to convert sting to int
a += 10
print(a)

print("==================================")