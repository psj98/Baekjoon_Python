# 처음 짠 코드
s = list(input().upper())
r = [0] * 26
a = 0
b = '?'
for n in s:
  r[ord(n) - 65] += 1
  if a < r[ord(n) - 65]:
    b = n
    a = r[ord(n) - 65]
  elif a == r[ord(n) - 65]:
    b = '?'
print(b)

# 수정 코드 (숏코딩)
s = input().upper()
a = 0
for i in set(s):
  c = s.count(i)
  if a == c:
    b = '?'
  if a < c:
    a = c
    b = i
print(b)