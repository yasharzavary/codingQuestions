
def kasr_latki(n, s=1, Final_num='', mul_num=1):
    # base statement: when we reach last one, just add number and back
    if s == n:
        return Final_num + str(mul_num)
    # start new up position
    Final_num += str(mul_num) + '+\\frac{'
    temp = 2*mul_num  # up number
    Final_num = kasr_latki(n, s+1, Final_num, temp)
    Final_num += '}{'  # close up and open down
    temp += 1  # down number
    Final_num = kasr_latki(n, s+1, Final_num, temp)
    Final_num += '}'  # close down
    return Final_num

print(kasr_latki(int(input())))
