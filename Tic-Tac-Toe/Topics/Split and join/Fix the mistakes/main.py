text = input()
words = text.split()
addresses = ["https://", "http://", "www."]
filtered = [word for word in words for address in addresses if word.lower().startswith(address)]
for answer in filtered:
    print(answer)