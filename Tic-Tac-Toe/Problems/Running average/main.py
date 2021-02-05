string = input()

num_list = [int(c) for c in string]

answer = [(num_list[i] + num_list[i + 1]) / 2 for i in range(len(num_list) - 1)]

print(answer)