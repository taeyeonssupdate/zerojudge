M, D = list(map(int, input().split(" ")))
print({
    0: "普通",
    1: "吉",
    2: "大吉"
}[(M*2+D) % 3])
