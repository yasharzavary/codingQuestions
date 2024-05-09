temp = '{:.2f}'.format(float(input()) / float(input())**2)


print(temp)
temp = float(temp)
if temp < 18.5:print('Underweight')
elif temp < 25: print('Normal')
elif temp < 30: print('Overweight')
else: print('Obese')
