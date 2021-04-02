# put your python code here
grades = input().split()

a_grades = [grade for grade in grades if grade == "A"]

print(round(len(a_grades) / len(grades), 2))