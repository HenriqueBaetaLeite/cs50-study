scores = []

for i in range(3):
  score = int(input("Score: "))
  # scores.append(score)
  scores += [score]


average = sum(scores) / len(scores)

print(scores, average)