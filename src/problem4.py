def is_palindrome(n: int) -> bool:

    digits = []

    while n > 0:
        digits.append(n % 10)
        n = n // 10

    reversed_digits = reversed(digits)

    for i, j in zip(digits, reversed_digits):
        if i != j:
            return False

    return True

if '__main__' == __name__:

    numbers = []

    for i in reversed(range(100, 1000)):
        for j in reversed(range(100, i + 1)):
            numbers.append(i * j)

    numbers.sort(reverse=True)

    for n in numbers:
        if is_palindrome(n):
            print(n)
            break