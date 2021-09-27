from functools import cmp_to_key


mp = {}


def comp(a, b):

    for i in range(min(len(a), len(b))):

        if (mp[a[i]] != mp[b[i]]):
            if mp[a[i]] < mp[b[i]]:
                return -1
            else:
                return 1
    if (len(a) < len(b)):
        return -1
    else:
        return 1


def print_sorted(words, order):

    for i in range(len(order)):
        mp[order[i]] = i

    words = sorted(words, key=cmp_to_key(comp))

    for x in words:
        print(x, end="\n")


words = ["word", "world", "row"]
order = "worldabcefghijkmnpqstuvxyz"


X = input()

N = int(input())
S = []
for i in range(N):
    S.append(input())

print_sorted(S, X)
