# 1차원 배열로 실행
t=int(input())

for i in range(t):
    k=int(input())
    n=int(input())
    
    arr=[j for j in range(1, n+1)]

    for j in range(k):
        for l in range(1, n):
            arr[l]+=arr[l-1]

    print(arr[-1])