import csv

# a for append mode
# file = open("phonebook.csv", "a")

# name = input("Name: ")
# number = input("Number: ")

# writer = csv.writer(file)

# writer.writerow([name, number])

# file.close()

with open("phonebook.csv", "a") as file:
  name = input("Name: ")
  number = input("Number: ")

  # writer = csv.writer(file)
  writer = csv.DictWriter(file, fieldnames=["name", "number"])

  # writer.writerow([name, number])
  writer.writerow({"name": name, "number": number})
