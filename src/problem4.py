from collections import deque

def is_palindrome(n: int) -> bool:

    sn = str(n)

    for i in range(len(sn) // 2):
        j = -(i + 1)
        if sn[i] != sn[j]:
            return False

    return True

if '__main__' == __name__:

    numbers = deque([(999, 999)])
    largest = 0

    while len(numbers) > 0:

        n1, n2 = numbers.popleft()
        product = n1 * n2

        if is_palindrome(product):
            if product > largest:
                print(f'{product} = {n1} * {n2}')
                largest = product

        if n2 > 100:
            numbers.append((n1, n2 - 1))
        elif n1 > 100:
            numbers.append((n1 - 1, n1 - 1))

    print(f'Largest Palindrome Product: {largest}')
