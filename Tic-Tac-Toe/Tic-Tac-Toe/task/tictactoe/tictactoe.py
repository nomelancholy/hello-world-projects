# write your code here

def is_sequential(cells):
    x_count = 0
    o_count = 0

    for cell in cells:
        if cell == 'X':
            x_count += 1
        if cell == 'O':
            o_count += 1
    if x_count - o_count >= 2 or o_count - x_count >= 2:
        return False
    else:
        return True

def who_won(cells):

    x_won = False
    y_won = False

    for i in range(len(cells)):
        if i == 0 and cells[i] != '_':
            if cells[0] == cells[1] and cells[1] == cells[2]:



            cells[i]
        elif i == 1:
            cells[i]
        elif i == 2:
            cells[i]
        elif i == 3:
            cells[i]
        elif i == 5:

    return

user_input = input()
print("Enter Cells: "+user_input)
print("---------")
print("| "+user_input[0]+" "+user_input[1]+" "+user_input[2]+" |")
print("| "+user_input[3]+" "+user_input[4]+" "+user_input[5]+" |")
print("| "+user_input[6]+" "+user_input[7]+" "+user_input[8]+" |")
print("---------")



if not is_sequential(user_input):
    print("Impossible")
elif who_won() == 'X' or 'O':
