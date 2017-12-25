#include <string>
#include <queue>
#include <stdio.h>
#include <iostream>

typedef long long ll;

using namespace std;

const int TARGET_SEQUENCE = 13;
const int TOTAL_SEQUENCE = 1000;
const int REMAINING_SEQUENCE = TOTAL_SEQUENCE - TARGET_SEQUENCE;

// STATUS: SOLVED
// Problem 2: Largest product in a series
// The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
// 7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450
// Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?

int main() 
{
    int* arr = new int[1000];

    for (int i = 0; i < TOTAL_SEQUENCE; i++)
        arr[i] = charToInt(getchar());

    int index = largestSequenceIndex(arr);
    int ceil_index = index + TARGET_SEQUENCE;

    int product = 1;
    
    int (int i = index; i < ceil_index; i++) 
    {
        product *= arr[i];
    }

    cout << product;

    return 0;
}

int largestSequenceIndex(int* arr)
{
    queue<int> q;
    int zero_ctr = 0;
    int current_sum = 0;
    int greatest_index = 12;

    for (int i = 0; i < TARGET_SEQUENCE) 
    {
        int num = arr[i];
        sum 

        if (num == 0)
            zero_ctr++;

        q.push_back(num);
    }

    for (int i = TARGET_SEQUENCE; i < TOTAL_SEQUENCE; i++, index++) 
    {
        int num = arr[i];
        int new_sum = num + current_sum;

        

        if (zero_ctr)
    }

    return greatest_index - (TARGET_SEQUENCE - 1);
}

int charToInt(char c) 
{
    return c - 48;
}

int charToInt(int i) 
{
    return i - 48;
}