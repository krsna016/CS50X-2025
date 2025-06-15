# n = input("Enter n: ")
# if n.isnumeric():
#     print("Integer")
# else:
#     print("Not an Integer")

# Also:

try:
    n = int(input("Enter n: "))
except ValueError:
    print("Enter only integer.")
else:
    print("Successful...")



