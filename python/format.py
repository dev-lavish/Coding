name = input("what's your name ?")
if "," in name:
    last,first = name.split(",")
    name=f"{first} {last}"
    print(f"hello {name}")