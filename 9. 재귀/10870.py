arr=[0, 1, 1]
def fibo(n):
    if n<=2: return arr[n]
    a=fibo(n-1)+fibo(n-2)
    arr.insert(n, a)
    return arr[n]

print(fibo(int(input())))