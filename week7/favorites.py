import csv

with open("favorites.csv", "r") as file:
  # reader = csv.reader(file)
  reader = csv.DictReader(file)
  for row in reader:
    # favorite = row[1]
    favorite = row["language"]
    print(favorite)

