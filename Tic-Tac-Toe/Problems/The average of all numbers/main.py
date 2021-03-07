# put your python code here

start = int(input())
end = int(input())

factor_of_3 = []

for x in range(start, end + 1):
    if x % 3 == 0:
        factor_of_3.append(x)

print(sum(factor_of_3) / len(factor_of_3))
