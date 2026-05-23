# def hello(to):#passing the parameter
#     print(f"hello {to}")
#     #this is identation that keeps us in the function

# name=input("what's ur name?").title()
# hello(name)
# hello(to="world")#this is by default

# def main():
#     name=input("what's your name?").title()
#     hello(name)

# def hello(to):
#     print("hello ",to)

# main()

def main():
    x=int(input("wht's the value of x?"))
    print("square of the given number is =",square(x))

def square(n):#use of return function
    return pow(n,2) #or return n*n

main()


 