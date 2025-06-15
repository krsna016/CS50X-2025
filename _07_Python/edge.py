from PIL import Image, ImageFilter

before = Image.open("bridgeImage.jpeg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out1.jpeg")