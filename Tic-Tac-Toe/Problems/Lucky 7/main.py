n = int(input())

answers = []

for _ in range(n):
    number = int(input())
    if number % 7 == 0:
        answers.append(number * number)

for answer in answers:
    print(answer)