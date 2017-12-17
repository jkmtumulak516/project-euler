#include <iostream>

typedef long long ll;

using namespace std;

// STATUS: SOLVED
// Problem 5: Smallest multiple
// 2520 is the the smallest number than can be divided by each of the numbers from 1 to 10 without any remainder.
// what is the smallest positive number than is evenely divisible by all of the numbers from 1 to 20?

ll smallestMultiple();

int main()
{
    cout << smallestMultiple() << endl;

    return 0;
}
ll smallestMultiple()
{
    ll ctr = 0;
    for (ll i = 20; true; i += 20)
    {
        if (i % 11 == 0 &&
            i % 13 == 0 &&
            i % 14 == 0 &&
            i % 16 == 0 &&
            i % 17 == 0 &&
            i % 18 == 0 &&
            i % 19 == 0)
        {
            cout << ctr << endl;
            return i;
        }
        ctr++;
    }
}