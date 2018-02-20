#include <iostream>

using namespace std;

const int SUM = 1000;

int main()
{
    int a, b, c, r;
    bool flag = false;

    for (int i = 3; i < 666; i++)
    {   
        c = SUM - i;
        r = SUM - c;

        a = 1;
        b = r - a;

        int c_squared = (c * c);
        
        cout << c << " - " << c_squared << endl;
        while (b > a)
        {
            int a_squared = a * a;
            int b_squared = b * b;
            cout << "> " << a_squared << " + " << b_squared << " = "<< a_squared + b_squared << endl;
            if ((a_squared + b_squared) == c_squared)
            {
                flag = true;
                break;
            }
            else
            {
                b--;
                a++;
            }
        }

        if (flag)
            break;
    }

    cout << a << " " << b << " " << c << endl;
    cout << a * b * c << endl;

    return 0;
}