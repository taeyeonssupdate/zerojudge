while True:
    try:
        array = [input().split(' ') for i in range(int(input().split(' ')[0]))]
        array = list(map(list, zip(*array)))
        for a in array:
            for b in a:
                print(b, end=' ')
            print()
    except EOFError:
        break
