#include <iostream>

typedef long long ll;

using namespace std;

// STATUS: SOLVED
// Problem 2: Even Fibonacci numbers
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

ll fibSumOfEven(const ll n);

int main() 
{
    ll n;
    
    cin >> n;
    cout << fibSumOfEven(n);

    return 0; 
}

ll fibSumOfEven(const ll n) 
{
    ll sum = 2;

    ll a = 1;
    ll b = 2;
    ll c = 0;

    while (true)
    {
        a += b;
        b += a;
        c = a + b;

        if (c <= n) 
        {
            sum += c;
            a = b;
            b = c;
        } 
        
        else break;
    }

    return sum;
}