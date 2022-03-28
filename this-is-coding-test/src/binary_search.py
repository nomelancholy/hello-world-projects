from collections import Counter
from bisect import bisect_left, bisect_right, bisect
from turtle import home

def particular_number_count():
    
    n, x = map(int, input().split())
    
    numbers = list(map(int, input().split()))
    
    lv = bisect_left(numbers, x)
    rv = bisect_right(numbers, x)
    
    count = rv - lv
    
    if count == 0:
        print(-1)
    else:
        print(count)
        
def search_fixed_point():
    
    n = int(input())
    arr = list(map(int, input().split()))
    
    def find_fixed_point(array, start, end):
        
        if start > end:
            return None
        
        mid = (start + end) // 2
        
        print(array, start, mid, end)
        
        if array[mid] == mid:
            return mid
        elif array[mid] > mid:
            return find_fixed_point(array, start, mid - 1)
        elif array[mid] < mid:
            return find_fixed_point(array, mid + 1, end)
            
    result = find_fixed_point(arr, 0, n - 1)
    
    if result:
        print(result)
    else:
        print(-1)
        
def router_install():
    
    n, c = map(int, input().split())

    homes = []
    
    for _ in range(n):
        homes.append(int(input()))

    homes.sort()
    
    min_gap = 1
    max_gap = homes[-1] - homes[0]
    
    answer = 0

    while (min_gap <= max_gap):
        closest_gap = (min_gap + max_gap) // 2
        # 첫번째 집에는 일단 설치
        now = homes[0]
        count = 1
        
        # 두번째 집부터 순회
        for i in range(1, n):
            # 이전 집의 거리 + 격차보다 그 집의 거리가 멀면
            if homes[i] >= now + closest_gap:
                # 설치
                now = homes[i]
                count += 1
                
            if count >= c:
                min_gap = now + 1
                answer = now
            else:
                max_gap = now - 1
    
    print(answer)