def d(n: int) -> int:
    divisors = []
    for divisor in range(1, int(n // 2) + 1):
        divisible = n % divisor == 0
        if divisible:
            divisors.append(int(divisor))
    return sum(divisors)

if '__main__' == __name__:
    amicable_numbers = [0 for _ in range(10000)]
    amicable_numbers[0] = amicable_numbers[1] = -1
    for n, amicability in enumerate(amicable_numbers):
        if amicability == -1 or amicability == 1:
            continue

        dn = d(n)
        ddn = d(dn)
        if ddn == n and dn != n:
            amicable_numbers[n] = 1
            if dn < 10000:
                amicable_numbers[dn] = 1
        else:
            amicable_numbers[n] = -1
            if dn < 10000 and amicable_numbers[dn] == 0:
                amicable_numbers[dn] = -1

    print(sum([i for i, n in enumerate(amicable_numbers) if n == 1]))
