text = input().title()

answer = []

for idx in range(len(text)):
    if idx == 0:
        answer.append(text[idx].lower())
    elif text[idx] == " ":
        continue
    else:
        answer.append(text[idx])

print("".join(answer))