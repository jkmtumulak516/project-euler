if '__main__' == __name__:

    numbers = list([list() for _ in range(28124)])
    numbers[0] = 0

    for i, divisors in enumerate(numbers[1:], start=1):
        divisors = numbers[i]
        numbers[i] = sum(divisors)
        for j in range(i + i, 28124, i):
            numbers[j].append(i)

    abundant_numbers = set()

    for num, div_sum in enumerate(numbers):
        if div_sum > num:
            abundant_numbers.add(num)

    non_abundant_sum = list()

    for i in range(1, 28124):
        flag = True
        for an in abundant_numbers:
            if an >= i:
                continue
            dan = i - an
            if dan in abundant_numbers:
                flag = False
                break
        if flag:
            non_abundant_sum.append(i)

    print(sum(non_abundant_sum))
