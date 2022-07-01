a = int(input())
result = []
for i in range(a):
  cnt = sum = 0
  sen = list(map(str, input()))
  for j in sen:
    if j == 'O':
      cnt += 1
      sum += cnt
    else:
      cnt = 0
  result.append(sum)
  sum = 0
print(*result, sep='\n')