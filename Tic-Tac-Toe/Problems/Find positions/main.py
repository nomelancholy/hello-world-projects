# put your python code here
numbers = input().split()
x = int(input())

positions = [str(i) for i, number in enumerate(numbers) if int(number) == x]

if len(positions) == 0:
    print("not found")
else:
    print(" ".join(positions))