dictionary = ['all', 'an', 'and', 'as', 'closely', 'correct', 'equivocal',
              'examine', 'indication', 'is', 'means', 'minutely', 'or', 'scrutinize',
              'sign', 'the', 'to', 'uncertain']

words = input().split()
wrong_words = [word for word in words if word not in dictionary]
if len(wrong_words) != 0:
    print("\n".join(wrong_words))
else:
    print("OK")
