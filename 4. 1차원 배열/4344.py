# 출력 형식 1
a = int(input())
for i in range(a):
  d = 0
  b = list(map(int, input().split()))
  c = sum(b[1:])/b[0]
  for j in b[1:]:
    if j > c:
      d += 1
  print(f'{d/b[0]*100:.3f}%')

# 출력 형식 2
a = int(input())
for i in range(a):
  d = 0
  b = list(map(int, input().split()))
  c = sum(b[1:])/b[0]
  for j in b[1:]:
    if j > c:
      d += 1
  print('{:.3f}%'.format(d/b[0]*100))