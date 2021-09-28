

_, _, N = [int(x) for x in input().split()]

M = []
A = set()
B = set()

for i in range(N):
    a, b = [int(x) for x in input().split()]
    A.add(a)
    B.add(b)
    M.append([a, b])

A = list(A)  # list of non zero rows
B = list(B)  # list of non zero columns

for i in range(N):
    # Tranforming the rows
    M[i][0] = A.index(M[i][0]) + 1
    # Tranforming the columns
    M[i][1] = B.index(M[i][1]) + 1


print("\n".join([" ".join([str(x), str(y)]) for x, y in M]))

'''
Input:

4 5 2
3 2
2 5

Output:

2 1
1 2




6 5 3
3 5
2 3
6 5

2 2
1 1
3 2
'''
