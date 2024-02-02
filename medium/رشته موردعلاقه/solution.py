

count = 0
target = input()
for _ in range(int(input())):
    temp = target
    now = input()
    for c in now:
        if len(temp) == 0:
            count += 1
            break
        if c == temp[0]:
            temp = temp[1:]

print(count)