#include <iostream>
#include <stack>

typedef unsigned long long ll;

const int MAX = 1000000;
const int DEFAULT = -1;

ll next(ll n)
{
    if (n & 1) // odd
        return ((n * 3) + 1);
    else // even
        return n >> 1;
}

int main()
{
    int arr[MAX];
    std::stack<int> s;

    int greatestLen = 1;
    int greatestNum = 1;

    // ll temp = 113383;

    // int j = 1;
    // while (temp > 1)
    // {
    //     std::cout << j++ << " -> " << temp << std::endl;
    //     temp = next(temp);
    // }

    arr[1] = 1;

    for (int i = 0 ; i < MAX; i++)
        arr[i] = DEFAULT;

    for (int i = 2; i < MAX; i++)
    {
        int base = 1; // number to start counting from
        ll n = i;
        
        std::cout << "doing number: " << i << ", stack size: " << s.size() << std::endl;
        
        if (arr[n] == DEFAULT) {
            while (n > 1)
            {
                s.push(n);
                ll m = next(n); // next number in the sequence

                if (m < MAX              // next number does not exceed the maximum
                    && arr[m] != DEFAULT // next number is solved
                    && m != 1)           // next number is not 1
                {
                    base = arr[m];
                    break;
                }

                n = m;
            }

            int ctr = 1 + base;
            while (!s.empty())
            {
                ll current = s.top();
                s.pop();

                if (current < MAX)
                    arr[current] = ctr;
                ctr++;
            }
        }
        
        if (arr[i] > greatestLen)
        {
            greatestLen = arr[i];
            greatestNum = i;
        }

        std::cout << i << " -> " << arr[i] << std::endl;
    }
    
    std::cout << "greatest len: " << greatestLen << std::endl;
    std::cout << "greatest num: " << greatestNum << std::endl;
    
    return 0;
}