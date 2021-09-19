

T = int(input())
ans = []

for i in range(T):
    D, N, K = [int(x) for x in input()]
    A = []
    for i in range(N):
        A.append([int(x) for x in input()])
    sum = 0


for i in range(T):
    print(f"Case #{i+1}: {ans[i]}")
