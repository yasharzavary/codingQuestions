
def finder(num):
    for i in range(2, num):
        if num % i == 0:
            return num // i
    return 1


print(finder(int(input())))
