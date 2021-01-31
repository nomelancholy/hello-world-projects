# put your python code here
first_class = int(input())
second_class = int(input())
third_class = int(input())

total_desk = first_class // 2 + first_class % 2
total_desk += second_class // 2 + second_class % 2
total_desk += third_class // 2 + third_class % 2

print(total_desk)