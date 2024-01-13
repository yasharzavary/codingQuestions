 #created by: yashar zavary rezaie


n = input()
nLen = len(n)

res = 0
for i in range(0, nLen-1):
    res += 2**i

resTemp = 2 ** (nLen-1)
x = 1
if n[0] == '1':
    while x != nLen:
        if n[x] == '0':
            resTemp -= 2 ** (nLen - x - 1)
        elif n[x] == '1':
          pass
        else:
          break
        x += 1

print(res+resTemp)