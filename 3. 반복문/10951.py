while True:
    try:
        a, b = map(int, input().split())
        print(a + b, end='\n')
    except:
        break