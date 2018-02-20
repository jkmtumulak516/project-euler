#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    long long sumOfSquares = 0, squareOfSums = 0;

    for (long long i = 1; i <= n; i++)
    {
        sumOfSquares += i * i;
        squareOfSums += i;
    }

    squareOfSums *= squareOfSums;

    cout << squareOfSums - sumOfSquares << endl;

    return 0;
}