def selfNum(n):
    b = n
    while n > 0:
        b += n % 10
        n = int(n / 10)
    return b

data = list(range(1, 10001))

for i in range(10000):
    a = selfNum(i + 1)
    if a in data:
        data.remove(a)

print(*data)