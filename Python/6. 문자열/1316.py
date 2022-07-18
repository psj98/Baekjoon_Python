# sorted(a, key = a.find)가 유용할 것 같음
r = 0
for i in range(int(input())):
  a = input()
  if list(a) == sorted(a, key = a.find):
    r += 1
print(r)