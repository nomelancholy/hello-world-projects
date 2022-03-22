N = int(input())
adventurers = list(map(int, input().split()))

# 그룹들 정렬할 2차원 배열
groups = []

# 정렬하고
adventurers.sort()

# 그룹을 구성하지 못한 모험가가 남아있는 동안 반복
while adventurers:
  
  group = []
  # 가장 뒤에서 한명 빼서
  coward = adventurers.pop()

  # 그룹을 구성할 수 있는지 확인하고
  if coward - 1 > len(adventurers):
    break
  
  # 가능하면 그룹에 더한다
  group.append(coward)

  # 남은 필요 인원이 하나 줄어드니 -1
  coward -= 1
  
  # 그가 가지고 있는 공포심만큼의 모험가를
  for a in adventurers[:]:
    # 그룹에 더한다
    group.append(a)
    coward -= 1
    adventurers.remove(a)

    # 마지막이면 그룹을 그룹 배열에 추가
    if coward == 0:
      groups.append(group)
      break

print(len(groups))