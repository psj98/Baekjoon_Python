# 1 1*6 2*6 3*6 4*6 5*6
# 2~7
# 8~19
# 20~37
a=int(input())
sum=1
cnt=1

while(True):
    if(sum<a):
        sum+=cnt*6
        cnt+=1
    else:
        break

print(cnt)