from collections import Counter
from bisect import bisect_left, bisect_right, bisect

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
    