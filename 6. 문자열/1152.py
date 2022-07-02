s = input().strip()
if len(s) == 0:
    print(0)
else:
    print(s.count(' ') + 1)