

a, b = map(int, input().split())
x = abs(b -a)
temp = ''
for i in range(2, max(a, b)):
    if x % i == 0:
        temp += str(i) + ' '
print(temp[:len(temp)-1])
