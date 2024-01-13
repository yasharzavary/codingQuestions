# created by: yashar zavary rezaie

dates = {
    'Farvardin':31,
    'Ordibehesht': 31,
    'Khordad': 31,
    'Tir': 31,
    'Mordad': 31,
    'Shahrivar': 31,
    'Mehr':30,
    'Aban': 30,
    'Azar': 30,
    'Dey': 30,
    'Bahman': 30,
    'Esfand':29
}

days = ['shanbe', '1shanbe', '2shanbe', '3shanbe', '4shanbe', '5shanbe', 'jome']
dateKeys = ['Farvardin',
    'Ordibehesht',
    'Khordad',
    'Tir',
    'Mordad',
    'Shahrivar',
    'Mehr',
    'Aban',
    'Azar',
    'Dey',
    'Bahman',
    'Esfand']

for _ in range(int(input())):
    today = input().split()
    goal = input().split()
    if dateKeys.index(today[1]) == dateKeys.index(goal[1]):
        if int(today[0]) - int(goal[0]) >= 0:
            print(days[days.index(today[2]) - ((int(today[0]) - int(goal[0])) % 7)])
        else:
            print(days[(days.index(today[2]) + (int(goal[0]) - int(today[0]))) % 7])

    elif dateKeys.index(today[1]) > dateKeys.index(goal[1]):
        step = int(today[0])
        temp = dateKeys.index((today[1])) - 1
        goalTemp = dateKeys.index((goal[1]))
        while temp != goalTemp:
            step += dates[dateKeys[temp]]
            temp -= 1
        print(days[days.index(today[2]) - ((step + dates[goal[1]] - int(goal[0])) % 7)])

    else:
        temp = dateKeys.index((today[1])) + 1
        goalTemp = dateKeys.index((goal[1]))
        step = dates[today[1]] - int(today[0])
        while temp != goalTemp:
            step += dates[dateKeys[temp]]
            temp += 1
        print(days[(days.index(today[2]) + step + int(goal[0])) % 7])
