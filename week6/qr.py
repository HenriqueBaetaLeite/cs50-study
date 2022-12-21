# import os
import qrcode

# image = qrcode.make("https://www.linkedin.com/in/henriquebaetaleite/")

image = qrcode.make("https://github.com/HenriqueBaetaLeite")

image.save("qr.png", "PNG")

# os.system("open qr.png")
