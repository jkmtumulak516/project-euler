#include <iostream>

typedef long long ll;

const int LEN = 20 + 1;

int main()
{
    ll matrix[LEN][LEN] = { 0 };

    // initialize
    for (int i = 0; i < LEN; i++)
    {
        matrix[0][i] = 1L;
        matrix[i][0] = 1L;
    }

    for (int i = 1; i < LEN; i++)
    {
        for (int j = 1; j < LEN; j++)
            matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
    }

    std::cout << matrix[LEN - 1][LEN - 1] << std::endl;

    return 0;
}