numbers=[10, 12, 65, 25, 44, 55, 66, 87, 98, 89]
odds=[]
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds)
#odd_nums=[num for num in numbers if num % 2 ==1]
odd_nums=[num for num in numbers if num % 2 ==1 if num% 5 ==0]
print(odd_nums)

players =['sakib','musfik','liton']
ages=[35,47,12]

age_comb=[]
for player in players:
    print('player:',player)
    for age in ages:
        print(player,ages)
        age_comb.append([player,age])
print(age_comb)

age_comb2=[[player,age] for player in players for age in ages]
print(age_comb2)