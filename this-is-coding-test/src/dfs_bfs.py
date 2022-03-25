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