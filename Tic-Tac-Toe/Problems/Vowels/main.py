vowels = 'aeiou'
# create your list here
string = input()

answer = [char for char in string for v in vowels if char == v]

print(answer)