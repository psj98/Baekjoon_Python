a, b = map(int, input().split())
num = list(map(int, input().split()))
c = []
for i in num:
    if i < b:
        c.append(i)

for i in c:
    print(i, end=' ')