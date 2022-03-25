from collections import deque

def ice_drink():
    
    n, m = map(int, input().split())
    
    # 틀
    cast = []
    
    # 만들 수 있는 갯수
    count = 0
    
    # 위 오른쪽 아래 왼쪽 (검사 방향) 
    dx = [0, 1, 0, -1]
    dy = [-1, 0, 1, 0]
    
    # 틀 제작 완료
    for _ in range(n):
        cast.append(list(map(int, list(input()))))
    
    # 방문 여부 체크 완료    
    visited = [[False] * m for _ in range(n)]
    
    for i, line in enumerate(cast):
        for j, grid in enumerate(line):
            # 틀이거나 방문한 곳이면 건너 뛰고
            if grid == 1  or visited[i][j] == True:
                continue
            # 아니면 방문 처리
            visited[i][j] = True
            
            # 0인 부분의 좌표를 큐에 넣고
            q = deque([[i, j]])
            
            # 큐가 빌 때 까지
            while q:
                # 하나 빼서
                x, y = q.popleft()
                
                # 사방을 보면서
                for k in range(len(dx)):
                    nx = x + dx[k]
                    ny = y + dy[k]
                    
                    # 틀을 벗어나거나 홈이 없는 곳이거나 방문한 곳이면 건너뛰고
                    if nx < 0 or nx >= n or ny < 0 or ny >= m or cast[nx][ny] == 1 or visited[nx][ny]:
                        continue
                    # 아니면 큐에 넣는다
                    q.append([nx, ny])
                    visited[nx][ny] = True
            
            # 과정을 다 거치고 나오면 그룹 하나 형성
            count += 1
    
    return count

def escape_maze():
    
    n, m = map(int, input().split())
    
    graph = []
    
    visited = [[False] * n for _ in range(m)]
    
    for _ in range(n):
        graph.append(list(map(int, list(input()))))
        
    # 1, 1 에서 시작
    q = deque()
    q.append([0, 0])
    visited[0][0] = True
    
    # 위 오른쪽 아래 왼쪽 (검사 방향) 
    dx = [0, 1, 0, -1]
    dy = [-1, 0, 1, 0]
    
    answer = 0

    # 무한 반복하는데
    while True:
        x, y = q.popleft()
        # 목표 지점 도달 
        if x == n - 1 and y == m - 1:
            # 값 출력
            answer = graph[x][y]
            break
        # 4방향 확인
        for i in range(len(dx)):
            nx = x + dx[i]
            ny = y + dy[i]
            if not (0 <= nx < n) or not (0 <= ny < m):
                continue
            if graph[nx][ny] == 0:
                continue
            # 처음 오는 곳이면 이전 값을 그 곳에 더한다
            if graph[nx][ny] == 1:
                q.append([nx, ny])
                graph[nx][ny] += graph[x][y]
                
    
    return answer

def search_particular_city():
    n, m, k, x = map(int, input().split())

    graph = [[]for _ in range(n + 1)]
    visited = [False] * (n + 1)
    distances = [-1] * (n + 1)
    
    # 그래프 구성
    for _ in range(m):
        a, b = map(int, input().split())
        graph[a].append(b)
    
    # 큐 생성
    q = deque([x])
    distances[x] = 0
    
    while q:
        now = q.popleft()
        
        for i in graph[now]: 
            if not visited[i]:
                visited[i] = True    
                distances[i] = distances[now] + 1 
                q.append(i)
                
    answers = [i for i, v in enumerate(distances) if v == k]

    if not answers:
        print(-1)
    else:
        for a in answers:
            print(a)
            
    return -1