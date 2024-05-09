
days = [
    'shanbe',
    '1shanbe',
    '2shanbe',
    '3shanbe',
    '4shanbe',
    '5shanbe',
    'jome',
]

for _ in range(3):
    input()
    for day in input().split():
        if day in days: days.remove(day)

print(len(days))


