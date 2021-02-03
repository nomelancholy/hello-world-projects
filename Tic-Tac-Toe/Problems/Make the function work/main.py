def closest_higher_mod_5(x):
    remainder = x % 5
    if remainder == 0:
        return x
    while x % 5 != 0:
        x += 1
    return x