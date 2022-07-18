h, m = map(int, input().split())
c = int(input())

num1 = c // 60
num2 = c % 60

h += num1
m += num2

if m >= 60:
    h += 1
    m -= 60

if h >= 24:
    h -= 24

print(h, m)