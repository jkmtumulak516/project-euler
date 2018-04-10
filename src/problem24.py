
def factorial(n):
    product = 1
    for i in range(2, n + 1):
        product *= i
    return product

target = 1000000
n = 10
permutations = factorial(n)

ctr = 0
# the arrays is indices are the numbers 
# and the value of an index is the position of that number in the final number
arr = []
# array of remaining numbers to be added to the list
remaining = []

for i in range(0, n):
    arr.append(-1)

for i in range(0, n):
    remaining.append(i)

# i is the order of a number 
for i in range(1, n + 1):
    
    permutations /= n
    n -= 1
    inc = permutations
    print(inc)

    to_remove = 0

    # j is the number in the final number
    for j in remaining:
        # print("doing " + str(j))
        if arr[j] == -1:
            if ctr + inc < target:
                ctr += inc
            else:
                arr[j] = i
                to_remove = j
                break              
        print(j, ctr)
    remaining.remove(to_remove)
    print(arr)

print(arr)

result = 0

for index, val in enumerate(arr):
    result += index * (10 ** (10 - val))

print(result)
