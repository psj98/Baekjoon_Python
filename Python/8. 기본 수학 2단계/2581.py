m=int(input())
n=int(input())

cnt=sum=0
prime=[]
for i in range(m, n+1):
    for j in range(2, i+1):
        if i%j==0:
            if i==j:
                prime.append(i)
            break

for i in range(m, n+1):
    if i in prime:
        sum+=i
        if cnt==0:
            cnt=i

if sum==0:
    print(-1)
else:
    print(sum, cnt, sep="\n")