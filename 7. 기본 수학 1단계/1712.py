# 처음 시도 (시간 초과)
a, b, c=map(int, input().split())
cnt=1
if b>=c:print(-1)
else:
  while True:
    a+=b
    if a < c*cnt:
      print(cnt)
      break
    cnt+=1

# 수정
a, b, c = map(int, input().split())
if b >= c:
    print(-1)
else:
  print(a // (c - b) + 1)