# with open("students.csv") as file:
#     for line in file:
#         row =line.rstrip().split(",")
#         print (f"{row[0]} is in {row[1]}")

#2 for a sorted file




#as the python does not know on what basis to compare so we define key
# students = []
# with open("students.csv") as file:
#     for line in file:
#         name,house = line.rstrip().split(",")
#         student = {"name":name,"house":house}
#         students.append(student)

   
# for student in sorted(students,key=lambda student:student["name"] ):
#     print(f"{student['name']} is in {student['house']}")#used single quote because we already used the used the doble ""




#key lambda is equivalent to get_name function
#using dictreader


# import csv
# students = []
# with open("students.csv") as file:
#     reader=csv.DictReader(file)
#     for row in reader:
#         students.append({"name":row["name"],"house":row["house"]})
    
# for student in sorted(students,key=lambda student:student["name"]):
#     print(f"{student['name']} is in {student['house']}")





#csv writer
# import csv
# name = input("what's your name ?")
# house = input("what house you are in ?")

# with open("students.csv","a") as file:
#     writer=csv.writer(file)
#     writer.writerow([name,house])

#dictwriter
import csv
name = input("what's your name ?")
house = input("what house you are in ?")

with open("students.csv","a") as file:
    writer=csv.DictWriter(file, fieldnames=["name","house"])
    writer.writerow({"name":name,"house":house})