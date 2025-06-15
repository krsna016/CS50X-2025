print("--- Calculator ---")
try:
    x = int(input("X = "))
    y = int(input("Y = "))
except ValueError:
    print("Enter only number....")
else:
    print(f"{x} + {y} = {x + y}")

