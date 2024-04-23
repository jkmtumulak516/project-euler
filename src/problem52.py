from copy import deepcopy
from typing import Dict

def same_digits(x: int) -> bool:

    s = str(x)
    digits: Dict[str, int] = {}

    for c in s:
        if c not in digits:
            digits[c] = 0

        digits[c] += 1

    for i in range(2, 7):
        sm = str(x * i)
        if len(sm) != len(s):
            return False

        sm_digits: Dict[str, int] = deepcopy(digits)
        for c in sm:
            if c not in sm_digits or sm_digits[c] == 0:
                return False
            sm_digits[c] -= 1

    return True


if __name__ == '__main__':

    result = None
    x = 1

    while result is None:
        if same_digits(x):
            result = x
        x += 1

    print(result)
