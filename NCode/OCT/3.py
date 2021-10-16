
def print_triplets(arr, n):
    s = []
    for i in range(0, n - 1):

        for j in range(i + 1, n):
            diff = arr[j] - arr[i]

            if ((arr[i] - diff) in arr):
                print("{} {} {}" .
                      format((arr[i] - diff),
                             arr[i], arr[j]),
                      end="\n")

    s.append(arr[i])


A = [int(x) for x in input().split(" ")]
print_triplets(A, len(A))
