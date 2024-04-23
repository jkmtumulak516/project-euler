from typing import List
from collections import OrderedDict

def complete_pandigital(s: str) -> int | None:

    if len(s) != 9:
        return False

    not_seen = set([i for i in range(10)])
    for c in s:
        i = int(c)
        if i in not_seen:
            not_seen.remove(i)
        else:
            return None

    if len(not_seen) != 1:
        return None

    return str(not_seen.pop()) + s

if __name__ == '__main__':
    multiples: OrderedDict[int, List[str]] = OrderedDict()

    for n in [17, 13, 11, 7, 5, 3, 2]:
        multiples[n] = []

        i = 1
        while i * n < 1000:
            multiples[n].append('{:03d}'.format(i * n))
            i += 1

    segments = [*multiples[17]]
    del multiples[17]

    new_segments = []

    for n, multiplesN in multiples.items():
        for multiple in multiplesN:
            for segment in segments:
                if segment[:2] == multiple[1:]:
                    new_segments.append(multiple[0] + segment)
        segments = new_segments
        new_segments = []

    valid_nums = []
    for segment in segments:
        complete_num = complete_pandigital(segment)
        if complete_num is not None:
            valid_nums.append(int(complete_num))

    print(sum(valid_nums))