num = []
for i in range(9):
  a = int(input())
  num.append(a)

max_n = max(num)
for index, n in enumerate(num):
  if max_n == n:
    print(max_n)
    print(index+1)
    break