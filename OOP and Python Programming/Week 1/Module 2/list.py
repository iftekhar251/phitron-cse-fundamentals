# index = 0  1  2  3  4  5  6  7  8  9
numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
# index =  -10 -9 -8 -7 -6 -5 -4 -3 -2 -1

print(numbers[3],numbers[-3])

# list(start: end) start frim the start end berfore last index

print(numbers[2:4])
print(numbers[1:7])

# list(start :end :step)

print(numbers[2:7:1])
print(numbers[2:7:2])
print(numbers[2:7:-1])
print(numbers[7:2:-1])
print(numbers[7:2:-2])
print(numbers[4:])
print(numbers[:7])
print(numbers[:])#shortcut to copy
print(numbers[::-1])#shortcut to reverse a list