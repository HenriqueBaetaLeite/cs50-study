# import os
import qrcode

image = qrcode.make("https://www.linkedin.com/in/henriquebaetaleite/")

image.save("qr.png", "PNG")

# os.system("open qr.png")
