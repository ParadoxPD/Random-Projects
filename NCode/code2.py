

def transpose(a):
    return [[a[j][i] for j in range(len(a))] for i in range(len(a[0]))]


def find_index(list, val):
    for sub_list in list:
        if val in sub_list:
            return (list.index(sub_list), sub_list.index(val))


H, W, N = [int(x) for x in input().split()]

M = [[0 for _ in range(W)] for _ in range(H)]

for i in range(N):
    a, b = [int(x) for x in input().split()]
    M[a-1][b-1] = i+1

M2 = []
for i in range(H):
    if sum(M[i]) != 0:
        M2.append(M[i])
M2 = transpose(M2)
M = M2.copy()

M2 = []
for i in range(W):
    if sum(M[i]) != 0:
        M2.append(M[i])

M2 = transpose(M2)
for i in range(N):
    print(" ".join([str(x+1) for x in find_index(M2, i+1)]))
