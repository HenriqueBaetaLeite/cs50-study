
try:
  x = int(input("X: "))
except:
  print("Must provide an integer number!")

y = int(input("Y: "))

z = x / y

# integer overFlow
print(f"{z:.20f}")
