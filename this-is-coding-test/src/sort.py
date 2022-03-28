import heapq

def guk_young_su():
    n = int(input())

    students = []

    for _ in range(n):
        info = input().split()
        
        transformed = []
        
        for i, v in enumerate(info):
            if i > 0:
                transformed.append(int(v))
            else:
                transformed.append(v)
                
        students.append(transformed)

    students.sort(key= lambda x: (-x[1], x[2], -x[3], x[0]))

    for s in students:
        print(s[0])
    
def antenna():
    
    n = int(input())
    homes = list(map(int, input().split()))

    homes.sort()
    criteria = (n - 1) // 2

    print(homes[criteria])
    
def card_sorting():
    
    n = int(input())

    numbers = []
    answer = 0

    for _ in range(n):
        heapq.heappush(numbers, int(input()))
        
    while len(numbers) != 1:
        first = heapq.heappop(numbers)
        second = heapq.heappop(numbers)
        
        sum_value = first + second
        
        answer += sum_value
        
        heapq.heappush(numbers, sum_value)
        
    print(answer)
        