import heapq

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
    
def gold_mine():
    
    t = int(input())
    
    # 테스트 케이스 돈다
    for _ in range(t):
        n, m = map(int, input().split())
        
        # 금광 구성
        gold_mine = [[0] * n for _ in range(m)]
        
        golds = list(map(int, input().split()))
        
        for i in range(n * m):
            v, r = divmod(i, m)
            gold_mine[r][v] = golds[i]
            
        print(gold_mine)
        # 그 칸에 도달했을 때 얻을 수 있는 금의 최대량 기록 배열
        max_value = [[0] * n for _ in range(m)]
        
        # 첫째 칸은 각 값 기록
        for i in range(n):
            max_value[0][i] = gold_mine[0][i]
        
        dy = [-1, 0, 1]
        
        # 두번 째 칸 부터는
        for i in range(0, m - 1):
            # 각 칸에서
            for j in range(n):
                # 이동 가능한 방향을 구하고
                for k in dy:
                    ny = j + k
                    # 그게 범위 내이면
                    if 0 <= ny < n:
                        # 그 칸에 이미 기록되어 있던 값과 이동해온 값 사이의 합 중 큰 값을 기록한다
                        max_value[i + 1][ny] = max(max_value[i + 1][ny], max_value[i][j] + gold_mine[i  + 1][ny])
                        
        print(max(max_value[len(max_value) - 1]))
        
def int_triangle():
    
    n = int(input())

    triangle = []

    memo = [[0] * i for i in range(1, n + 1)]

    for _ in range(n):
        triangle.append(list(map(int, input().split())))
        
    # 첫 값 저장
    memo[0][0] = triangle[0][0]

    # 두번째 줄부터
    for i in range(len(triangle) - 1):
        # 원소들을 각각 도는데
        for j in range(len(triangle[i])):
            # 왼쪽 대각선
            memo[i + 1][j] = max(memo[i + 1][j], memo[i][j] + triangle[i + 1][j])
            # 오른쪽 대각선
            memo[i + 1][j + 1] = max(memo[i + 1][j + 1], memo[i][j] + triangle[i + 1][j + 1])
            
    print(max(memo[len(memo) - 1]))            
        
def resignation():
    
    n = int(input())

    # 일정
    t_arr = []
    # 비용
    p_arr = []

    # 날짜 별 최대 수익 기록 배열
    d_arr = [0] * (n + 1)
    # 현재 까지의 최대 금액
    max_value = 0

    # 입력 받고
    for _ in range(n):
        t, p = map(int, input().split())
        t_arr.append(t)
        p_arr.append(p)

    # 퇴직전날부터 거꾸로 
    for i in range(n - 1, -1, -1):
        day = t_arr[i] + i
        # 퇴직 이후까지 이어지는 상담은 할 수 업음
        if day <= n:
            d_arr[i] = max(p_arr[i] + d_arr[day], max_value)
            max_value = d_arr[i]
        # 벗어나는 경우엔
        else:
            d_arr[i] = max_value
        print(i, d_arr)
        
    print(max(d_arr))
    
def soldier_deploy():
    n = int(input())

    soldiers = list(map(int, input().split()))
    
    # 뒤집는다
    soldiers.reverse()
    
    dp = [1] * n
    
    for i in range(1, n):
        for j in range(0, i):
            print(i, j, soldiers[j], soldiers[i])
            # j번째 값이 j + 1보다 크면
            if soldiers[j] < soldiers[i]:
                dp[i] = max(dp[i], dp[j] + 1)
                print(dp)
    
    print(n - max(dp))

def ugly_number():
    
    n = int(input())
    
    ugly_numbers = set()
    
    factors = [2, 3, 5]
    
    heap = []
    
    heapq.heappush(heap, 1)
    
    while len(ugly_numbers) != n:
        top = heapq.heappop(heap)
        ugly_numbers.add(top)
        
        for factor in factors:
            heapq.heappush(heap, top * factor)
            
    print(ugly_numbers)            
    print(list(ugly_numbers)[n - 1])