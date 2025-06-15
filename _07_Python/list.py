# scores = []
# for i in range(3):
#     scores.append(int(input(f"Score out of 100 - {i+1}: ")))
#
# average = sum(scores)/len(scores)
# print(f"Average = {average:.2f}")

#
# names = ["Alice", "Bob", "Charlie", "Diana", "Ethan"]
# name = input("Name to search for : ").capitalize()
# for n in names:
#     if n == name:
#         print("Founded")
#         break
# else:
#     print("Not Founded...")



names = ["Alice", "Bob", "Charlie", "Diana", "Ethan"]
name = input("Name to search for : ").capitalize()
if name in names:
    print("Founded")
else:
    print("Not Founded...")