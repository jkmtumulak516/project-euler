
size = 1001
limit = (size - 1) >> 1
start = 1
ctr = start
inc = 2
inc_growth = 2

for i in range(0, limit):
    start += inc
    ctr += start * 4 + inc * 6
    start += inc *3
    inc += inc_growth

print ctr