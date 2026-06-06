name='Shakib\'s khan' #escape
name2="Shakib khan"
#multiple string
name3="""
    shakib khan
    number one
"""

print (name)

# string is a sequence of characters
for char in name2:
    print(char)

print(name2[3])
print(name2[1:6])
print(name2[-3])
print(name2[::-1])

#mutable means changeable
#immutable mans you can not change it
#name2[0]='R'
print(name2)

if 'khan' in name2:
    print ('exist')

print(name2.upper())