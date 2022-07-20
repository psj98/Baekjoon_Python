cnt=1
sum=0

a, b, c = map(int, input().split())

# 시간 초과
# while(True):
#     if a*cnt-b*(cnt-1)>=c:
#         break
#     cnt+=1

# print(cnt)

# cnt>=(c-b)/(a-b)
cnt=(c-b)/(a-b)

if cnt==int(cnt):
    print(int(cnt))
else:
    print(int(cnt)+1)