# from sys import argv
#
# if len(argv) == 2:
#     print("Hello,",argv[1].capitalize()+"!")
# else:
#     print("Hello, World!")


import sys
if len(sys.argv) != 2:
    print("Missing command line argument!!!")
    sys.exit(1)
else:
    print("Hello,",sys.argv[1].capitalize())
    sys.exit(0)