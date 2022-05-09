if '__main__' == __name__:

    n = 1

    diag_sum = 1

    dimensions = 3

    while dimensions <= 1001:

        step = dimensions - 1

        for i in range(4):
            n += step
            diag_sum += n

        dimensions += 2

    print(diag_sum)