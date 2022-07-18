import sys

num = int(input())
sum = []

for i in range(num):
    a, b = map(int, sys.stdin.readline().split())
    sum.append(a+b)

for i in sum:
    print(i)