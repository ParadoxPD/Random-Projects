

N = int(input())

P = [int(x) for x in input().split()]

Q = [x for x in P]
for i in range(N):
    Q[P[i]-1] = i+1

print(" ".join([str(x) for x in Q]))
