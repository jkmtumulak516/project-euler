import gc


if '__main__' == __name__:

    primes = set()
    sieve = list([True for _ in range(1000000)])

    for n in range(2, 1000000):
        is_prime = sieve[n]
        if is_prime:
            primes.add(n)
        for i in range(n + n, len(sieve), n):
            sieve[i] = False

    del sieve
    gc.collect()

    circular_primes = []

    for prime in primes:
        sprime = str(prime)
        cprime = sprime[1:] + sprime[0]

        circular = True
        while cprime != sprime:
            if int(cprime) not in primes:
                circular = False
                break
            cprime = cprime[1:] + cprime[0]

        if circular:
            circular_primes.append(prime)

    print(len(circular_primes))
