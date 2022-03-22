string = input()

# 0일때만 숫자를 더하고 다음 숫자와 더하고
# 아니면 다 곱한다
# 0인 인덱스 체크 배열
check_arr = []

answer = 0

for i in range(len(string)):
  # 0이어서 계산을 건너뛴 배열이면 다음 번 반복으로
  if i in check_arr:
    continue

  if int(string[i]) == 0:
    # 인덱스 하나 올려서
    j = i + 1
    # 0이 아닌 숫자 만나거나 배열 벗어날 때까지 인덱스 올리기를 반복하다가
    while int(string[j]) == 0:
      print(j, string[j], len(string))
      check_arr.append(j)
      j += 1
      if j >= len(string):
        break

    # 배열을 벗어난 경우가 아니면 덧셈
    if j != len(string):
      answer += int(string[j])
      # 더해준 수의 인덱스도 제외
      check_arr.append(j)
      
  # 0이 아니면 곱셈을 하는데
  else:
    # answer가 0이면 1과
    if answer == 0:
      answer = 1 * int(string[i])
    # 아니면 answer 와 곱셈
    else:
      answer *= int(string[i])
    
print(answer)