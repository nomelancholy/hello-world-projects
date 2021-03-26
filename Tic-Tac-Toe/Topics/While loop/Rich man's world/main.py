deposit = int(input())
year = 0

while deposit < 700000:
    deposit = deposit + ((deposit / 100) * 7.1)
    year += 1

print(year)