s = input("Do you agree? ")

# if s == "y" or s == "Y":

# s = s.lower()
# if s in ["y", "yes"]:

if s.lower() in ["y", "yes"]:
  print("Agreed")
elif s in ["n", "N", "No", "NO", "no"]:
  print("Not agreed")
else:
  print("You type an invalid option!")
