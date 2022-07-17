prime=[0 for _ in range(10001)]
prime[1]=1

for i in range(2, len(prime)):
    for j in range(2, int(i**0.5)+1):
        if i%j==0 and prime[i]==0:
            prime[i]=1
            break

for i in range(int(input())):
    n=int(input())
    a=n//2

    for j in range(a, 1, -1):
        if prime[n-j]==0 and prime[j]==0:
            print(j, n-j)
            break