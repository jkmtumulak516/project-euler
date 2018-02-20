#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    vector<ll>* primes = new vector<ll>(0);

    primes->push_back(2);

    ll i = 3;
    while (primes->size() < 10001)
    {
        bool is_prime = true;

        for (ll j = 0; j < primes->size(); j++)
        {
            if (i % primes->at(j) == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << i << endl;
            primes->push_back(i);
        }
        i += 2;
    }
        
    cout << endl << primes->at(10000) << endl;

    delete primes;

    return 0;
}