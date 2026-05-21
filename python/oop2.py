class Student:
    def __init__(self,name,house):
        if not name:
            raise ValueError("the name is missing")
        if house not in ["Griffindor","Hufflepuff","Slytherine","Ravenclaw"]:
            raise ValueError("the house is not matching")
        self.name = name
        self.house = house


def main():
    student = get_student()
    print(f"{student.name} is from {student.house}")

def get_student():
    name = input("what's the name ?")
    house = input("What's the house ?")
    return Student(name,house)

if __name__ == "__main__":
    main()
