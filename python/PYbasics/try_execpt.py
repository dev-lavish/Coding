#now we detect the errors and convert them into our suitable language
# try:
#     x=int(input("what's x?"))
#     print(f"the value entered is {x}")

# except ValueError:
#     #actual name of the error which is occuring
#     print("you did not entered the integer ")


#better practise
# try:
#     x=int(input("what's the value for x "))

# except ValueError:
#     print("not the integer")

# else:
#     print(f"the value is {x}")

#aking for input until right innout is put
# while True:
#     try:
#         x=int(input("what's the value for x?"))
        
    
#     except ValueError:
      
#         print("that's not integer ")
        
        

#     else:
       
#         break;
# print(f"the value of integer is {x}")

def main():
    x=get_int()
    print(f"the value is {x}")

def get_int():
    while True:
        try:
            x=int(input("what's x ?"))
        except ValueError:
            print("x is not integer")
        else:
            return x


main()