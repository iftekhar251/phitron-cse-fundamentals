# def sum(num1,num2,num3=0,num4=0):
#     result=num1+num2+num3+num4
#     return result

# total=sum(20,20,25,25)
# print("total :",total)


#args

def all_sum(num1,num2,*numbers):
    print(numbers)
    sum=0
    for num in numbers:
      print(num)
      sum=sum+num
    return sum

total=all_sum(45,48,14,15,47)
print('total :',total)