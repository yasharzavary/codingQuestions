

n = int(input())

if n % 2 == 0:
    print((n//2 + 1)**2)
else:
    t = n//2 + 1
    print(t * (t + 1))
