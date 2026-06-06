# list -->[]
# tuple --> ()
# set -->{}
numbers=[12,56,78,65,65,12,98]
print(numbers)
number_set=set(numbers)
print(number_set)
number_set.add(25)
print(number_set)
number_set.remove(25)
print(number_set)

for item in number_set:
    print(item)

if 9 in number_set:
    print('9 exists')
elif 98 in number_set:
    print('98 exists')


A={4,4,5,8}
B={5,8,7,6}
print(A and B)
print(A | B)