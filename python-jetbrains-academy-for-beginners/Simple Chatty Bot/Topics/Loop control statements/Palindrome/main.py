word = input()
reverse_word = ''.join(reversed(word))

if word == reverse_word:
    print("Palindrome")
else:
    print("Not palindrome")