def pentagonal(n: int) -> int:
    return n * (3 * n - 1) // 2

if __name__ == '__main__':

    pentagonals = set()

    result = None
    i = 1
    while result is None:

        n = pentagonal(i)
        for p in pentagonals:
            q = n - p
            if q not in pentagonals:
                continue
            r = q - p if q > p else p - q
            if r in pentagonals:
                result = abs(p - q)
                break

        pentagonals.add(n)
        i += 1

    print(result)