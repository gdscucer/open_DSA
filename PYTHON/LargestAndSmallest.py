any_number= []
no_of_num = int(input("How many number you want to append to list? "))
for i in range(no_of_num):
    input_number = int(input("Enter number {} to append in List: ".format(i+1)))
    any_number.append(input_number)
print("Here is your list : \n{}".format(any_number))
any_number.sort()
print(f'Sorted in ascending order:\n ',any_number)
print(f'The largest number in list is ',any_number[-1])
print(f'The Smallest number in list is ', any_number[0])
