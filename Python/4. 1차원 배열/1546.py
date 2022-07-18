a = int(input())
data = list(map(int, input().split()))
data.sort()
for i in range(a):
    data[i] = data[i] / data[-1] * 100
sum = sum(data)
print(sum / a)