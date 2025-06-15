# ans = input("Do you agree? (y/n): ")
# if ans == "y" or ans == "Y":
#     print("Agreed.")
# elif ans == "n" or ans == "N":
#     print("Not agreed.")

# also

# ans = input("Do you agree? (y/n): ")
# if ans in ['Y','y']:
#     print("Agreed.")
# elif ans in ['N', 'n']:
#     print("Not agreed.")

# also

ans = input("Do you agree? (y/n): ").lower()
if ans == 'y':
    print("Agreed.")
elif ans == 'n':
    print("Not agreed.")