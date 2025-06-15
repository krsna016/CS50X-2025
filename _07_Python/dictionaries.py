# peoples = [
#     {"name": "Alice", "phone": "555-0101"},
#     {"name": "Bob", "phone": "555-0102"},
#     {"name": "Charlie", "phone": "555-0103"},
#     {"name": "David", "phone": "555-0104"},
#     {"name": "Eve", "phone": "555-0105"},
#     {"name": "Frank", "phone": "555-0106"},
#     {"name": "Grace", "phone": "555-0107"},
#     {"name": "Heidi", "phone": "555-0108"},
#     {"name": "Ivan", "phone": "555-0109"},
#     {"name": "Judy", "phone": "555-0110"},
#     {"name": "Karl", "phone": "555-0111"},
#     {"name": "Laura", "phone": "555-0112"},
#     {"name": "Mallory", "phone": "555-0113"},
#     {"name": "Niaj", "phone": "555-0114"},
#     {"name": "Olivia", "phone": "555-0115"}
# ]
#
# name = input("Name? ").capitalize()
# for person in peoples:
#     if name == person['name']:
#         print("--Found--")
#         print(f"{person['name']} -> {person['phone']}")
#
#         break
# else:
#     print("Not Found")


peoples = {
    "Alice": "555-0101",
    "Bob": "555-0102",
    "Charlie": "555-0103",
    "David": "555-0104",
    "Eve": "555-0105",
    "Frank": "555-0106",
    "Grace": "555-0107",
    "Heidi": "555-0108",
    "Ivan": "555-0109",
    "Judy": "555-0110",
    "Karl": "555-0111",
    "Laura": "555-0112",
    "Mallory": "555-0113",
    "Niaj": "555-0114",
    "Olivia": "555-0115"
}
n = input("Name? ").capitalize()
for name, phone in peoples.items():
    if n == name:
        print(f"{name} -> {phone}")
        break
else:
    print("Not Found.")
