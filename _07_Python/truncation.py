def main():
    x = int(input('Enter x: '))
    y = int(input("Enter y: "))

    print(f"{x/y = }")
    print(f"x/y = {x/y:.50f}")
    print(f"x/y = {x/y:.5f}")
    print(f"{x//y = }")

if __name__ == '__main__':
    main()