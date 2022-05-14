if '__main__' == __name__:
    factors = [set() for _ in range(1000000)]

    for n in range(2, 1000000):
        if len(factors[n]) != 0:
            continue
        for m in range(n + n, 1000000, n):
            factors[m].add(n)

    ln = -1
    longest = 0
    lfactors = None

    for n, factors in enumerate(factors):
        if len(factors) > longest:
            ln = n
            longest = len(factors)
            lfactors = factors

    print(ln)
