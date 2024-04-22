def is_prime(n: int) -> bool:

    for i in range(2, int((n // 2) + 1)):
        if n % i == 0:
            return False
    return True

if '__main__' == __name__:

    number = 13195 #600851475143

    for x in range(2, number // 2):
        if is_prime(x) and number % x == 0:
            divisor = number // x
            if is_prime(divisor):
                print(divisor)
                break

