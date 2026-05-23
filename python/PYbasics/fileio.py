# names = []
# for _ in range(3):
#     names.append(input("what's your name ?"))

# for name in sorted(names):
#     print(f"hello,{name}")

#when we run the code again we lost the data

#whatever we write here it will keep on updating 
#creating the file (1)

# name = input("what's your name ?")
# with open("fileio.txt","a") as file:
#   file.write(f"{name}\n")

#opening the same file(2)
# with open("fileio.txt","r") as file:
#     for line in file:
#         print("hello",line.rstrip())

#(3)
names=[]
with open("fileio.txt") as file:
    for line in file:
        names.append(line.rstrip().capitalize())

for name in sorted(names):
    print(f"hello,{name}")