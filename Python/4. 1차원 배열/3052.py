data = []
for _ in range(10):
    num = int(input())
    if (num % 42) not in data:
        data.append(num % 42)
print(len(data))