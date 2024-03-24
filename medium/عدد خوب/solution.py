
final = int(input())
x = 2
i = 1
while True:
    temp = 0
    for j in range(1, i+1):
        if temp >= final:
            break
        if i % j == 0:
            temp += 1
    if temp >= final:
        print(i)
        break
    i += x
    x += 1
