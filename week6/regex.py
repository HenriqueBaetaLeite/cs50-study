import re
# regular expression

s = input("Yes or No? ")

s = s.lower()

if re.search("^y(es)?$" , s):
  print("Agreed!")
elif re.search("^no?$", s):
  print("Not Agreed")