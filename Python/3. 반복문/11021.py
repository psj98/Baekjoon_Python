sum = []
for i in range(int(input())):
    a, b = map(int, input().split())
    sum.append(a+b)

for i, num in enumerate(sum):
    print(f'Case #{i+1}: {num}')