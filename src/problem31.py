# COINS = [200, 100, 50, 20, 10, 5, 2, 1]
COINS = [1, 2, 5, 10, 20, 50, 100, 200]

if '__main__' == __name__:
    ways = [0 for _ in range(201)]
    ways[0] = 1
    for coin in COINS:
        j = coin
        while j <= 200:
            ways[j] += ways[j - coin]
            j += 1

    print(ways)