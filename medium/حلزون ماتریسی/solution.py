
import math

# prime checker
def squareFinder(num):
    if str(math.sqrt(num))[-1] == '0':return True
    return False

# get matris from user
n = int(input())
matris = []
for _ in range(n):
    matris.append(list(map(int, input().split())))

# main part
numSum = 0
numberOfPrime = 0

# first row
for number in matris[0]:
    numSum += number
    if squareFinder(numSum):numberOfPrime += 1
        
# other parts
section = 0
i = 0
j = n-1
while n != 0:
    n -= 1
    go = 0
    # move one column
    while go < n:
        if section%2 == 0:i += 1
        else: i -= 1
        numSum += matris[i][j]
        if squareFinder(numSum):numberOfPrime += 1
        go += 1
    
    go = 0
    # move one rows
    while go < n:
        if section % 2 == 0: j -= 1
        else: j += 1
        numSum += matris[i][j]
        if squareFinder(numSum):numberOfPrime += 1
        go += 1  
    
    section += 1  

print(numberOfPrime)