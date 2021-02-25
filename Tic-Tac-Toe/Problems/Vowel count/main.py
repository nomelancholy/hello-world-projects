string = "red yellow fox bite orange goose beeeeeeeeeeep"
vowels = 'aeiou'

vowel_character = [s for s in string for v in vowels if s == v]

print(len(vowel_character))