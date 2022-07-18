def a(n):
  if n==1:
    return ['*']

  num=a(n//3)
  arr=[]

  for i in num:
    arr.append(i*3)
  for i in num:
    arr.append(i+' '*(n//3)+i)
  for i in num:
    arr.append(i*3)

  return arr

n=int(input())
print('\n'.join(a(n)))