# put your python code here
megan_went_hours = int(input())
megan_went_minutes = int(input())
megan_went_seconds = int(input())
rain_started_hours = int(input())
rain_started_minutes = int(input())
rain_started_seconds = int(input())

answer = (rain_started_hours - megan_went_hours) * 3600
answer += (rain_started_minutes - megan_went_minutes) * 60
answer += rain_started_seconds - megan_went_seconds

print(answer)