

disDic = {
    '0': 0,
    '1': 0,
    '2': 0
}

input()
for i in list(input().split()):
    disDic[i] += 1

temp = abs((disDic['1']%2) - (disDic['2']%2)*2)

while disDic['2'] > 0 and disDic['1'] > 1:
    disDic['2'] -= 1
    disDic['1'] -= 2

temp2 = abs((disDic['1']%2) - (disDic['2']%2)*2)

print(temp if temp<temp2 else temp2)
