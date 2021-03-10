average_number = float(input())

if average_number < 2:
    print("Analytic")
elif average_number <= 3:
    print("Synthetic")
else:
    print("Polysynthetic")