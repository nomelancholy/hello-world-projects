n = int(input())

arr = [999 for _ in range(n + 1)]

if n <= 1:
    print("This number is not prime")
else:
    for i in range(2, n + 1):
        if arr[i] != 0:
            arr[i] = 1
        j = 2
        while i * j <= n:
            arr[i * j] = 0
            j += 1
    if arr[n] == 1:
        print("This number is prime")
    else:
        print("This number is not prime")