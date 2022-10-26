import sys

names = ["John", "David", "Baeta", "Percy", "Ron"]

name = input("Name: ")

# for n in names:
#   if name == n:
#     print("Found!!")
#     sys.exit(0)

if name in names:
  print("Found!!")
  sys.exit(0)


print("Not found")
sys.exit(1)
