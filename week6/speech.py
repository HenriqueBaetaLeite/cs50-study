import pyttsx3

engine = pyttsx3.init()

# name = input("Name: ")

# engine.say(f"Olá, {name}")

voices = engine.getProperty('voices')

# print(voices)

engine.say("Pessoal, preciso de um favor.")

engine.runAndWait()
