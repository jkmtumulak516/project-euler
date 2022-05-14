from collections import deque
from math import ceil, floor

if '__main__' == __name__:

    next = (1, 2)
    f37 = 3 / 7

    closest = (0, 1)
    closest_diff = f37

    while next is not None:
        n, m = next

        fraction = n / m
        diff = abs(f37 - fraction)
        if fraction < f37 and abs(f37 - fraction) < closest_diff:
            closest = (n, m)
            closest_diff = diff

        y = m + 1
        if fraction >= f37:
            x = floor((n / m) * y)
        else:
            x = ceil((n / m) * y)

        next = (x, y) if y < 1000000 else None

    print(closest)
