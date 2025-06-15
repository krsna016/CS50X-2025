def main():
    while True:
        try:
            height = int(input("Enter the height : "))
        except ValueError:
            print("--kindly enter valid value--")
        else:
            create_brick_pyramid(height)
            break


def create_brick_pyramid(height):
    for i in range(height):
        for j in range(0, i+1):
            print("#",end=" ")
        print()

if __name__ == '__main__':
    main()
