a = int(input())
b = int(input())
c = int(input())
sum = str(a * b * c)
result = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for i in range(len(sum)):
  result[int(sum[i])] += 1
print(*result, sep='\n')