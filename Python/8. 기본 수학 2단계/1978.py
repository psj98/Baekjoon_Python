cnt=0
n=int(input())
prime=map(int, input().split())

for i in prime:
    for j in range(2, i+1):
        if i%j==0:
            if i==j:
                cnt+=1
            break

print(cnt)