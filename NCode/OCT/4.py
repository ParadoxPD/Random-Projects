
def number_sum(n):
    return sum([int(x) for x in str(n)])


N = int(input())
R = int(input())

print(number_sum(R*number_sum(N)))
