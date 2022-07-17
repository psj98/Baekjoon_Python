n=int(input())
di=2
while(n!=1):
    if n%di==0:
        n=int(n/di)
        print(di)
    else:
        di+=1