b = list(input())
a = '22233344455566677778889999'
r = 0
for i in b:
  r += int(a[ord(i) - 65]) + 1
print(r)