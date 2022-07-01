h, m = map(int, input().split())

if m < 45:
    if h != 0:
        h -= 1
    else:
        h = 23
    m = m + 15

else:
    m -= 45

print(h, m)