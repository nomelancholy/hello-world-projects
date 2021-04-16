string = input()
numbers = [int(string[i]) for i in range(len(string))]
answer = [sum(numbers[:i + 1]) for i in range(len(numbers))]
print(answer)