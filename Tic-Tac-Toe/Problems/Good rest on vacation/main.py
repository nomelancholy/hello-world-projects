# put your python code here
days = int(input())
day_food_cost = int(input())
one_flight_cost = int(input())
day_hotel_cost = int(input())

print((days * day_food_cost) + (one_flight_cost * 2) + ((days - 1) * day_hotel_cost))