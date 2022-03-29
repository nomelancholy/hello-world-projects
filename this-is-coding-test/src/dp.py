def make_to_one():
    
    n = int(input())
    # 메모
    d = [0] * (n + 1)
    
    
    # i에서 1을 만들 수 있는 횟수를 기록
    for i in range(2, n + 1):
        # 1을 뺄 수 있다
        d[i] = d[i - 1] + 1
        
        # 2로 나누어 떨어지면 2로 나눌 수 있고
        if i % 2 == 0:
            d[i] = min(d[i], d[i // 2] + 1)
        if i % 3 == 0:
            d[i] = min(d[i], d[i // 3] + 1)
        if i % 5 == 0:
            d[i] = min(d[i], d[i // 5] + 1)
        print(i, d)
    
    # n을 1로 만들 수 있는 최소 연산 횟수 출력
    print(d[n])