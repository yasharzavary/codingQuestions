
def kasr_latki(n, s=1, Final_num='', mul_num=1):
    if s == n:
        return Final_num + str(mul_num)
    Final_num += str(mul_num) + '+\\frac{'
    temp = 2*mul_num
    Final_num = kasr_latki(n,s+1,Final_num,temp)
    Final_num += '}{'
    temp += 1
    Final_num = kasr_latki(n,s+1,Final_num,temp)
    Final_num += '}'
    return Final_num

print(kasr_latki(int(input())))
