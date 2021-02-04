value = input()
answer = ""

for c in value:
    if c.islower():
        answer += c
    else:
        if answer == "":
            answer += c.lower()
        else:
            answer = answer + "_" + c.lower()

print(answer)