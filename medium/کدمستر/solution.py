
from math import sqrt, log

baseTemp = ['0', '1', '2', '3', '4', '5', '6', '7', '8',
            '9', 'A', 'B', 'C', 'D', 'E', 'F']

numTemp = [2 ,3]

def prime(num):
    global numTemp

    if num == 2 or num == 3:
        return True
    # if num % 2 == 0:
    #     return False

    for number in numTemp:
        if num % number == 0:
            return False
    numTemp.append(num)
    return True
    # for i in range(3, int(sqrt(num))+1, 2):
    #     if num % i == 0:
    #         return False
    # return True

def changeBase(num, k):
    # temp = []
    # i = int(log(num, k))+1
    #
    # for _ in range(i//2):
    #     temp.append(num % k)
    #     num //= k
    #
    # if i % 2 == 1:
    #     num //= k
    # for _ in range(i//2):
    #     if num // k != temp.pop():
    #         return False
    # return True

    temp=''
    while num!=0:
        temp = baseTemp[num%k] + temp
        num//=k
    if temp == temp[::-1]:
        return True
    return False

n, k = map(int, input().split())


num = 2
if changeBase(2, k):
    n-=1
num+=1
while n!=0:
    if prime(num) and changeBase(num, k):
        n-=1
    num += 2

print(num-2)

