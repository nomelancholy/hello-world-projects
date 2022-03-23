# 118p 게임 개발
from ast import Continue


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

def string_rearrangement(s):
    
    
    number = []
    string = ''
    
    for c in s:
        if c.isdigit():
            number.append(int(c))
        else:
            string += c
            
    string = "".join(sorted(string))
    answer = string + str(sum(number))
    
    return answer

def dummy(n, k, apples, turn_count, turn_info):
    
    board = [[0] * n for _ in range(n)]
    
    turn_info.sort(key=lambda x: x[0], reverse=True)
    
    # 뱀 세팅
    board[0][0] = 1
    head = [0, 0]
    
    # 사과 세팅
    for apple in apples:
        board[apple[0] - 1][apple[1] - 1] = 9
    
    # 방향 정의
    directions = ['R', 'D', 'L', 'U']
    dx = [0, 1, 0, -1]
    dy = [1, 0, -1, 0]
    # 처음엔 오른 쪽 부터
    direction = 'R'
    
    # 시간
    time = 0
    
    # 뱀 기록
    record = [(0, 0)]
    
    while True:
        time += 1
        i = directions.index(direction)
        
        nx = dx[i] + head[0]
        ny = dy[i] + head[1]
        
        print(nx, ny, n)
        
        # 으앙 주금
        if nx >= n or ny >= n or nx < 0 or ny < 0 or board[nx][ny] == 1:
            break
        # 그냥 이동
        elif board[nx][ny] == 0:
            board[nx][ny] = 1
            record.append((nx, ny))
            head = [nx, ny]
            # 꼬리 삭제
            ox, oy = record.pop(0)
            board[ox][oy] = 0
            

        # 사과 먹음
        elif board[nx][ny] == 9:
            board[nx][ny] = 1
            record.append((nx, ny))
            head = [nx, ny]
        
        # 남은 방향 전환 정보 없으면 컨티뉴
        if not turn_info:
            continue
        # 있으면 확인 후 적용
        if time == turn_info[-1][0]:
            if turn_info[-1][1] == 'L':
                i -= 1
                if i < 0:
                    i = 3
            elif turn_info[-1][1] == 'D':
                i += 1
                if i > 3:
                    i = 0
            direction = directions[i]
            turn_info.pop()
        
    return time