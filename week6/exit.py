import sys

if len(sys.argv) != 2:
  print("Missing args...")
  sys.exit(1)
else:
  print(f"Hello, {sys.argv[1]}")
  sys.exit(0)

# To see the last value in terminal, just type echo $?