#include <iostream>

typedef long long ll;

using namespace std;

// STATUS: SOLVED
// Problem 1: Multiples of 3 and 5
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

ll sumOfAllMultiples(ll n);

int main() 
{
    ll n;
    
    cin >> n;
    cout << sumOfAllMultiples(n);

    return 0; 
}

ll sumOfAllMultiples(ll n) 
{
    ll sum = 0;

    ll m3 = 3;
    ll m5 = 5;

    while (m3 < n || m5 < n)
    {
        if (m3 < m5) {
            sum += m3;
            m3 += 3;
        } else if (m5 < m3) {
            sum += m5;
            m5 += 5;
        } else {
            sum += m3; // or sum += m5; doesn't matter
            m3 += 3;
            m5 += 5;
        }
    }

    return sum;
}