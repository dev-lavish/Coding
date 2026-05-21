# def main():
#     student = get_student()#name,student = get_student()
#     print(f"{student[0]} from {student[1]}")
#     #0 location of tuple  and 1 location

# def get_student():
#     name = input("what's your name ")
#     house=input("whats the house ?")
#     return name,house

# if __name__ == "__main__":
#   main() 

class Student:
    ...

def main():
    student=get_student()
    print(f"{student.name} is from {student.house}")

def get_student():
    student = Student()#creating an object
    student.name = input("what's your name ?")
    student.house = input("which house ?")
    return student

main()