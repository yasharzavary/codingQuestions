

def printSoduko(s):
    for i in s:
        for j in i:
            print(j)
    print('-'*15)

def find(soduko, numOfZero):
    while True:
        for i in range(9):
            for j in range(9):
                if soduko[i][j] != 0:
                    continue
                temp = [1,2,3,4,5,6,7,8,9]
                for tempJ in soduko[i][0:j]+soduko[i][j:]:
                    if tempJ in temp:temp.remove(tempJ)
                for tempI in range(0, i):
                    if soduko[tempI][j] in temp: temp.remove(soduko[tempI][j])
                for tempI in range(i+1, 9):
                    if soduko[tempI][j] in temp: temp.remove(soduko[tempI][j])
                # for tempI in range(i+1,)
                if len(temp) == 1:
                    soduko[i][j] = temp[0]
                    numOfZero -= 1
                    printSoduko(soduko)
                    if numOfZero == 0:
                        return soduko

numOfZero = 0
soduko = []
for _ in range(9):
    temp = list(map(int, input().split()))
    numOfZero += temp.count(0) 
    soduko.append(temp)

soduko = find(soduko, numOfZero)
          
# for row in soduko:
#     for col in row:
#         print(col)
            
            
      
        





