winners = []

n = int(input())

for _i in range(n):
    game_result = input()

    split_str = game_result.split(" ")

    player = split_str[0]
    result = split_str[1]

    if result == "win":
        winners.append(player)

print(winners)
print(len(winners))