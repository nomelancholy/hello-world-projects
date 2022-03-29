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

def ant_warrior():
    n = int(input())
    
    answer = 0
    
    # 식량 창고 갯수만큼 메모 배열 생성
    d = [0] * 100
    
    containers = list(map(int, input().split()))
    
    # 최대값을 구하기는데 일단
    
    # 식량 창고의 길이가 1일 경우
    d[0] = containers[0]
    # 식량 창고의 길이가 2일 경우
    d[1] = max(containers[0],containers[1])
    
    # 2개를 기록해 놓고
    
    # 길이가 i일 경우 i-1 만 터는게 좋은지, 아니면 i -2번 창고와 이번 창고를 터는게 좋은지만 확인해서 기록
    for i in range(2, n):
        d[i] = max(d[i - 1], d[i - 2] + containers[i])
        
    print(d[n - 1])
    
def floor_work():
    n = int(input())
    # 메모를 만들고
    d = [0] * (n + 1)
    
    # 하나일 때 가능한 경우의 수 기록
    d[1] = 1
    # 두개일 때 가능한 경우의 수 기록
    d[2] = 3
    
    # 그 이후로는 i-1 일때의 경우의 수에 d[i-2]일 때 경우의 수 * 2가 i번째 경우의 수
    for i in range(3, n + 1):
        d[i] = d[i - 1] + 2 * d[i -2] % 796796
        
    print(d[n])
    
def monetary_structure():
    n, m = map(int, input().split())
    
    monetaries = []
    
    for _ in range(n):
        monetaries.append(int(input()))
        
    # 최소한의 화폐 갯수
    
    d = [10001] * (m + 1)
    
    d[0] = 0
    
    # 화폐 별로 가즈아
    for monetary in monetaries:
        for j in range(monetary, m + 1):
            if d[j - monetary] != 10001:
                d[j] = min(d[j], d[j - monetary] + 1)

    if d[m] == 10001:
        print(-1)
    else:
        print(d[m])