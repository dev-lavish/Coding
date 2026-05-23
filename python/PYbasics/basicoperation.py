# name=input("what's your name ?")
# print("hello")
# print(name)
#2
# name=input("what's your name ?")
# print("hello :)",name)
#now other methods
#3
# name=input("what's your name ?")
# print("hello ",end="")#for not going to new line
# print(name)

#4 better and faster way internally
# name=input("what the name?")
# print(f"hello {name}")# whatever in between will be printed
# print("hello",name,sep="??")#whatever we want to seprate with

#usinf strip and capitalise and title

# name=input("what the name?")
# name=name.strip()
# print(f"hey {name}")#extra space during entering time is removed

# name=input("what's the name ?")
# name=name.capitalize()
# print(f"hello mate {name}")#just caps 1st word omly

# name=input("what's your name buddy?")
# name=name.title()
# print(f"hey {name}")#caps all

#we can also chain the functions
# name=input("what's your name mate?").strip().title()
# print(f"hey {name}")

# text=("i love python")
# print(text.split(" "))#just to split the strings


