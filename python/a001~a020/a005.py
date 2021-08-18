for i in range(int(input())):
    a, b, c, d = map(int, input().split())
    if (d - c == b - a):
        print(a, b, c, d, (b - a + d))
    else:
        print(a, b, c, d, b//a*d)
