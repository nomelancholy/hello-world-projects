# put your python code here
answers = []

while True:
    n = int(input())
    if n < 10:
        continue
    elif n <= 100:
        answers.append(n)
    else:
        break

for answer in answers:
    print(answer)