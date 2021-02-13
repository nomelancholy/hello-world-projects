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
    blank_cell = 0

    for i in range(len(cells)):
        if cells[i] == '_':
            blank_cell += 1
            continue
        elif i == 0:
            if cells[0] == cells[1] and cells[1] == cells[2]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
            elif cells[0] == cells[3] and cells[3] == cells[6]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
            elif cells[0] == cells[4] and cells[4] == cells[8]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
        elif i == 1:
            if cells[1] == cells[4] and cells[4] == cells[7]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
        elif i == 2:
            if cells[2] == cells[5] and cells[5] == cells[8]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
            elif cells[2] == cells[4] and cells[4] == cells[6]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
        elif i == 3:
            if cells[3] == cells[4] and cells[4] == cells[5]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True
        elif i == 6:
            if cells[6] == cells[7] and cells[7] == cells[8]:
                if cells[i] == 'X':
                    x_won = True
                else:
                    y_won = True

    if x_won and y_won:
        return "Impossible"
    elif x_won:
        return "X wins"
    elif y_won:
        return "O wins"
    elif not x_won and not y_won and blank_cell == 0:
        return "Draw"
    else:
        return "Game not finished"


user_input = input("> ")

print("Enter Cells: "+user_input)
print("---------")
print("| "+user_input[0]+" "+user_input[1]+" "+user_input[2]+" |")
print("| "+user_input[3]+" "+user_input[4]+" "+user_input[5]+" |")
print("| "+user_input[6]+" "+user_input[7]+" "+user_input[8]+" |")
print("---------")

if not is_sequential(user_input):
    print("Impossible")
else:
    result = who_won(user_input)
    print(result)
