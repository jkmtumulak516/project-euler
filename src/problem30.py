FIFTH_POWERS = [i ** 5 for i in range(10)]

if '__main__' == __name__:
    n = 9
    fifth_powers_sum = 0
    for i in range(2, 999999):
        digits_sum = 0
        n = i
        while n > 0:
            digits_sum += FIFTH_POWERS[n % 10]
            n //= 10

        if i == digits_sum:
            fifth_powers_sum += i

    print(fifth_powers_sum)
