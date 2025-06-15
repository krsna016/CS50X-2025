from PIL import Image, ImageFilter

before = Image.open("bridgeImage.jpeg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.jpeg")