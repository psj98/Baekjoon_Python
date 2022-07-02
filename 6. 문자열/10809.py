s=list(input())
r=[-1] * 26
for index, i in enumerate(s):
  if r[ord(i) - 97] == -1:
    r[ord(i) - 97] = index
print(*r)