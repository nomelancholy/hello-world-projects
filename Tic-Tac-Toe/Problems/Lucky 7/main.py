n = int(input())

answers = []

for _ in range(n):
    number = int(input())
    if number % 7 == 0:
        print(number ** 2)