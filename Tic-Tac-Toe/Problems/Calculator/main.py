# put your python code here
first_number = float(input())
second_number = float(input())
arithmetic_operation = input()

if arithmetic_operation == "+":
    print(first_number + second_number)

if arithmetic_operation == "-":
    print(first_number - second_number)

if arithmetic_operation == "*":
    print(first_number * second_number)

if arithmetic_operation == "pow":
    print(first_number ** second_number)

if arithmetic_operation == "/":
    if second_number == 0.0:
        print("Division by 0!")
    else:
        print(first_number / second_number)

if arithmetic_operation == "mod":
    if second_number == 0.0:
        print("Division by 0!")
    else:
        print(first_number % second_number)

if arithmetic_operation == "div":
    if second_number == 0.0:
        print("Division by 0!")
    else:
        print(first_number // second_number)