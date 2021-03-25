words = input().split()

answers = [word for word in words if word.endswith("s")]

print("_".join(answers))