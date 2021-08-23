def eratosthenes(num):
    """
    埃拉托斯特尼篩法
    source: https://zh.wikipedia.org/wiki/埃拉托斯特尼筛法
    """
    IsPrime = [True] * (num + 1)
    for i in range(2, int(num ** 0.5) + 1):
        if IsPrime[i]:
            for j in range(i * i, num + 1, i):
                IsPrime[j] = False
    return [x for x in range(2, num + 1) if IsPrime[x]]


if __name__ == '__main__':
    num = int(input())
    ans = ""
    # for prime in eratosthenes(num+1):
    for prime in range(2, num+1):
        times = 0  # reset this prime times
        while num % prime == 0:  # if div
            times += 1
            num //= prime
        if times:  # if cna't div
            if ans:
                ans += " * "
            ans += f"{prime}^{times}" if times > 1 else f"{prime}"
        if prime > num:
            break
    print(ans)
