import numpy as np

num = int(input())

main = np.ndarray(shape=(num,), dtype=str)

for i in range(num):
    main[i] = input()

print(main)

temp = np.ndarray(shape=(num-1,), dtype=str)
for i in range(num-1):
    temp[i] = input()

main.sort()
temp.sort()

for i in range(num-1):
    if main[i] != temp[i]:
        print(temp[i])
        break


