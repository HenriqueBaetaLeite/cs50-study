s = input("Do you agree? ")

# if s == "y" or s == "Y":
if s.lower() in ["y", "yes"]:
  print("Agreed")
elif s in ["n", "N", "No", "NO", "no"]:
  print("Not agreed")
else:
  print("You type an invalid option!")
