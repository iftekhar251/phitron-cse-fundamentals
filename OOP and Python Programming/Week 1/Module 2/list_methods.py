numbers=[1,2,3,4]
numbers.append(5)
print(numbers)
numbers.insert(2,6)
print(numbers)

if 7 in numbers:
    numbers.remove(7)
if 1 in numbers:
    numbers.remove(1)

print(numbers)

last=numbers.pop()
print(last,numbers)

if 2 in numbers:
    index= numbers.index(2)
    print(index)

sorted=numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)