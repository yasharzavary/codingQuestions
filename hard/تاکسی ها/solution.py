
# get data and solve each part
for _ in range(int(input())):
    # make passenger list
    passList = [int(input()) for _ in range(4)]
    upset = 4
    # send to insit one by one
    for i in range(4):
        passTemp = passList[0:i] + passList[i+1:]
        upsetTemp = 0
        if passTemp[2] > passTemp[0]: upsetTemp+=1
        if passTemp[1] > passTemp[0]: upsetTemp+=1
        if passTemp[2] > passTemp[1]: upsetTemp+=1
        if upsetTemp < upset:upset = upsetTemp
    print(upset)
        