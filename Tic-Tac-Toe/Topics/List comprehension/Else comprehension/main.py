# the following line reads the list from the input, do not modify it, please
old_list = [int(num) for num in input().split()]

binary_list = []

for num in old_list:
    if num > 0:
        binary_list.append(1)
    else:
        binary_list.append(0)

print(binary_list)