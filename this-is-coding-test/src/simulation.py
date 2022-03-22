def game_development(size, now, game_map):

    n, m = size
    global direction
    x, y, direction = now
    
    global turn_count
    turn_count = 0
    
    # 북, 동, 남, 서 방향 정의
    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
        
    # 왼쪽으로 도는 함수
    def turn_left():
        global direction
        global turn_count
        
        direction -= 1
        if direction < 0:
            direction = 3

        turn_count += 1
            
    memo = [[0] * n for _ in range(m)] 

    # 처음 떨어진 곳 저장
    memo[x][y] = 1
    
    # 방문한 칸의 수
    count = 1
    
    while True:
        # 왼쪽으로 돌고
        turn_left()
        
        if turn_count < 4:
            # 갈 방향 꺼내서
            nx = x + dx[direction] 
            ny = y + dy[direction]
        else:
            nx = x - dx[direction]
            ny = y - dy[direction]
        
        # 갈 수 있는 곳이면 가고
        if game_map[nx][ny] == 0 and memo[nx][ny] == 0:
            x, y = nx, ny
            memo[x][y] = 1
            count += 1
            # 회전 횟수 0으로 변경
            turn_count = 0    
        else:
            # 더 갈 곳 없으면
            if turn_count == 4:
                break
    
    return count