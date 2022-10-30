import csv

with open("favorites.csv", "r") as file:
  # reader = csv.reader(file)
  reader = csv.DictReader(file)
  # scratch, c, python = 0, 0, 0
  counts = {}
  # counts = dict()

  for row in reader:
    # favorite = row[1]
    favorite = row["problem"]

    if favorite in counts:
      counts[favorite] += 1
    else:
      counts[favorite] = 1

    # if favorite == "Scratch":
    #   scratch += 1
    # elif favorite == "C":
    #   c += 1
    # elif favorite == "Python":
    #   python += 1

# print(f"Scratch: {scratch}")
# print(f"C: {c}")
# print(f"Python: {python}")

def get_value(language):
  return counts[language]

# for favorite in sorted(counts, key=lambda language: counts[language] , reverse=True):
#   print(f"{favorite}: {counts[favorite]}")

favorite = input("Favorite: ").capitalize()

if favorite in counts:
  print(f"{favorite}: {counts[favorite]}")