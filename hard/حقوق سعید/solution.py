

def salary_calc(n, rangeSum, x):
    return (rangeSum * 2**(x-n-1)) % 1000000007

n, q = map(int, input().split())
months = list(map(int, input().split()))
for _ in range(q):
    result = salary_calc(n, sum(months), int(input()))
    print(result)
