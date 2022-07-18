# 시간초과 유의할 것
prime=[True]*(2*123456+1)

for i in range(2*123456+2):
    if i == 1:
        prime[i]=False
    else:
        for j in range(2, int(i**0.5)+1):
            if i%j==0 and prime[i]:
                prime[i]=False
                break

while(True):
    n = int(input())
    if n==0:
        break
    
    cnt=0
    for i in range(n+1, 2*n+1):
        if prime[i]:
            cnt+=1

    print(cnt)