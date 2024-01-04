
def findWays(mainStr, result='', dots=3):
    # back statement
    if dots == 0:
        if not mainStr:
            if result[-1] == '.':
                return
            print(result[0:len(result)-1])
        elif len(mainStr)>1 and mainStr[0]=='0':
            return
        elif int(mainStr) <= 255:
            print(result+mainStr)
        return


    temp = ''
    for i in range(len(mainStr)):
        temp += mainStr[i]
        if temp == '0':
            findWays(mainStr[i+1:], result + '0.', dots - 1)
            break
        elif int(temp) <= 255:
            findWays(mainStr[i+1:], result + temp + '.', dots - 1)
        else:
            return

findWays(input())
