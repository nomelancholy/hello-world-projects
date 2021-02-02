initial_quantity = int(input())
final_quantity = int(input())

HALF_LIFE = 12

times = 0

while initial_quantity >= final_quantity:
    initial_quantity //= 2
    times += 1

print(times * HALF_LIFE)