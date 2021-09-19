

def find_dist(s):
    try:
        N = len(s)
        dist_mat = []
        nodes = []
        for i in range(N):
            if s[i] == 1:
                nodes.append(i)

        for i in nodes:
            temp = []
            for j in range(N):
                temp.append(abs(i-j))
            dist_mat.append(temp)
        dist_mat = [[dist_mat[j][i]
                     for j in range(len(dist_mat))] for i in range(len(dist_mat[0]))]
        return (sum([min(x) for x in dist_mat]))
    except Exception:
        return 0


T = int(input())
ans = []

for i in range(T):
    N = int(input())
    ans.append(find_dist([int(x) for x in input()]))

for i in range(T):
    print(f"Case #{i+1}: {ans[i]}")
