result = input().zfill(2)
num = list(map(int, str(result)))
cnt = 0

while True:
  num.append(int(str(num[0] + num[1])[-1]))
  num.pop(0)
  cnt += 1

  if str(num[0]) + str(num[1]) == result:
    break

print(cnt)