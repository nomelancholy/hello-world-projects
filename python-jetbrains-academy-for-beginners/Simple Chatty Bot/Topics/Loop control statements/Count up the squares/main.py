# put your python code here
numbers_sum = 0

number = int(input())
numbers_sum += number
numbers = [number * number]

while numbers_sum != 0:
    n = int(input())
    numbers_sum += n
    numbers.append(n * n)

answer = sum(numbers)
print(answer)
