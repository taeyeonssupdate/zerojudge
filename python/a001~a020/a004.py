import sys
for year in sys.stdin.readlines():
    year = int(year)
    if year % 400 == 0:
        print("閏年")
    elif year % 100 == 0:
        print("平年")
    elif year % 4 == 0:
        print("閏年")
    else:
        print("平年")
