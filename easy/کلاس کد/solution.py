# created by: yashar zavary rezaie

def find(x):
    temp = 1
    # main loop
    while True:
        # goes one state number
        for i in str(temp):
            x -= 1
            if x == 0:
                return i
        temp += 1


num = int(input())
print(find(num))
