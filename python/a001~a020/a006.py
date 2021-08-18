a, b, c = map(int, input().split(" "))
if b * b - 4 * a * c < 0:
    print('No real root')
if b * b - 4 * a * c == 0:
    print(f"Two same roots x={int(-b / (2 * a))}")
if b * b - 4 * a * c > 0:
    temp = (b * b - 4 * a * c)**0.5
    print(f"Two different roots x1={int((-b + temp) / (2 * a))} , x2={int((-b - temp) / (2 * a))}")
