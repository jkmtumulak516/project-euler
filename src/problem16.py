import math

def simple(exp: int) -> int:
    n = 2 ** exp
    nums = []

    while n > 0:
        nums.append(int(n % 10))
        n = int(n // 10)

    return sum(nums)

def complex(exp: int) -> int:
    num_len = int(1 + exp * math.log10(2))
    nums = list([0 for _ in range(num_len)])
    nums[0] = 1

    order = 0

    for _ in range(exp):
        carry = 0
        i = 0
        while i <= order:
            product = (nums[i] * 2) + carry
            nums[i] = product % 10
            carry = 1 if product >= 10 else 0
            if i == order and carry == 1:
                order += 1
            i += 1

    return sum(nums)

if '__main__' == __name__:
    # print(simple(1000))
    print(complex(1000))
