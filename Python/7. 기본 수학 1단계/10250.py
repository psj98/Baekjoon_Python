t=int(input())

for i in range(t):
    h, w, p = map(int, input().split())

    x=str(int((p-1)/h)+1)

    if(p%h==0): y=str(h)
    else: y=str(p%h)

    print(y, x.zfill(2), sep='')