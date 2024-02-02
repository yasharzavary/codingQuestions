# created by: yashar zavary rezaie

class Entry:
    def __init__(self):
        self.prob = 0
        self.left = None
        self.right = None
        self.last = self

for _ in range(int(input())):
    num, length = map(int, input().split())
    temp = [None] * (num - 1)
    finalTemp = temp.copy()
    result = [0] * (num - 1)
    A = [input() for _ in range(num)]
    check = A[0]
    for i in range(length):
        for s in range(1, num):
            addTemp = (check[i] == A[s][i])
            if temp[s-1] == None:
                temp[s-1] = addTemp
                finalTemp[s-1] = addTemp
            else:
                if temp[s-1] != addTemp: result[s-1] += 1
                temp[s-1] = addTemp
    finalRes = 0
    for i in range(num-1):
        if (result[i]%2==0 and finalTemp[i]==False) or (result[i]%2==1 and finalTemp[i]==True): finalRes += result[i]+1
        else: finalRes += result[i]
    print(finalRes)
