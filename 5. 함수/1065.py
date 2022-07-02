# 함수 사용
def ch(n):
  result = 99
  for i in range(111, n+1):
    if int(str(i)[0])-int(str(i)[1]) == int(str(i)[1])-int(str(i)[2]):
      result+=1
  return result

n=int(input())
if n<=110:
  if n<100: print(n)
  else: print(99)
else:
  if n==1000: print(144)
  else: print(ch(n))

# 함수 사용 X
b = 99
n=int(input())
a=str(n)
if n<=110:
  if n<100: print(n)
  else: print(b)
else:
  if n==1000: print(144)
  else:
    for i in range(111, n+1):
      if int(str(i)[0])-int(str(i)[1]) == int(str(i)[1])-int(str(i)[2]):
        b+=1
    print(b)