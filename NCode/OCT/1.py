from collections import Counter

N = int(input())
K = int(input())
S1 = input()
S2 = input()
common_letters = Counter(S1) & Counter(S2)
print(sum(common_letters.values()))
