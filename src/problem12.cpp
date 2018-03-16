#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

const ll LIMIT = 10000000;

int main()
{
    vector< vector<ll> >* v = new vector< vector<ll> >(LIMIT, vector<ll>(0));

    for (int i = 1; i < LIMIT; i++)
    {
        for (int j = i; j < LIMIT; j += i)
            v->at(j).push_back(i);
    }

    int i = 2;
    int index = 1;
    while (index < LIMIT)
    {
        if (v->at(index).size() > 500)
            cout << index << " -> " << v->at(index).size() << endl;
        index += i;
        i++;
    }

    delete v;

    return 0;
}