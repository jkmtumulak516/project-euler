def is_prime(n: int) -> bool:

    for i in range(2, int((n // 2) + 1)):
        if n % i == 0:
            return False
    return True

if '__main__' == __name__:

    number = int(input('Enter a large number: '))

    for i in range(2, int(number // 2)):
        j = number / i
        if j % 1 == 0 and is_prime(int(j)):
            print(j)
            break
