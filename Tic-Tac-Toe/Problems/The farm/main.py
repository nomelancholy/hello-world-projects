def check_item(money):
    if money < 23:
        return "None"
    elif money < 678:
        return "chicken"
    elif money < 1296:
        return "goat"
    elif money < 3848:
        return "pig"
    elif money < 6769:
        return "cow"
    else:
        return "sheep"


def check_number(selected_item, money):
    if selected_item == "chicken":
        return money // 23
    elif selected_item == "goat":
        return money // 678
    elif selected_item == "pig":
        return money // 1296
    elif selected_item == "cow":
        return money // 3848
    else:
        return money // 6768


user_money = int(input())
item = check_item(user_money)

if item == "None":
    print(item)
else:
    number = check_number(item, user_money)
    if number > 1:
        if item != "sheep":
            item += "s"
    print(str(number) + " " + item)
