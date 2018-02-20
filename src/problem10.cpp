#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    vector<ll>* primes = new vector<ll>(0);

    primes->push_back(3);

    for (ll i = 5; i < 2000000; i += 2)
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
    }

    ll sum = 2;

    for (ll i = 0; i < primes->size(); i++)
    {
        sum += primes->at(i);
        cout << primes->at(i) << " ";
    }
        
    cout << endl << sum << endl;

    delete primes;

    return 0;
}