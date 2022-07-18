# 1 2 6 7 15
# 3 5 8 14
# 4 9 13
# 10 12
# 11

line=1
a=int(input())

while a>line:
    a-=line
    line+=1

if line%2==0:
    n=a
    m=line-a+1

else:
    n=line-a+1
    m=a

print(n, '/', m, sep='')