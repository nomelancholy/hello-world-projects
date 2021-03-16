unit = int(input())

if unit < 1:
    print("no army")
elif unit <= 9:
    print("few")
elif unit <= 49:
    print("pack")
elif unit <= 499:
    print("horde")
elif unit <= 999:
    print("swarm")
else:
    print("legion")