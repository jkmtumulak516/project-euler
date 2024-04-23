def triangle(n: int) -> int:
    return n * (n + 1) // 2

def pentagonal(n: int) -> int:
    return n * (3 * n - 1) // 2

def hexagonal(n: int) -> int:
    return n * (2 * n - 1)

if __name__ == '__main__':
    tn = 286
    pn = 166
    hn = 144

    t = triangle(tn)
    p = pentagonal(pn)
    h = hexagonal(hn)

    while not(t == p == h):
        if t < p and t < h:
            tn += 1
            t = triangle(tn)
        elif p < h:
            pn += 1
            p = pentagonal(pn)
        else:
            hn += 1
            h = hexagonal(hn)

    print(t)
