for i in range(int(input())):
  a, b = input().split()
  c = ''
  for i in range(len(b)):
    c += b[i] * int(a)
  print(c)