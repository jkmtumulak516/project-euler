def fact(n):
    product = 1
    for i in range(1, n + 1):
        product *= i
    return product

def digit_fact(factorials, n):
    return sum([factorials[c] for c in str(n)])

if '__main__' == __name__:

    factorials = {str(n): fact(n) for n in range(10)}

    limit = 9
    while limit < digit_fact(factorials, limit):
        limit *= 10
        limit += 9

    print(sum([i for i in range(3, limit + 1) if digit_fact(factorials, i) == i]))
