
input_string = input().split()
main = list(set(input_string[1]))


for _ in range(int(input_string[0])):
    temp = list(set(input()))
    if sorted(main) == sorted(temp): print('Yes')
    else: print('No')

