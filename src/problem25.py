import math

if '__main__' == __name__:

    a, b = 1, 2

    n = 3
    length = 1
    while length < 1000:
        a, b = b, a + b
        length = int(math.log10(b) + 1)
        n += 1

    print(n)