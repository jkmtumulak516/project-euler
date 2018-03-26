#include <iostream>

const int SIZE = 15;

int** pyramid = new int*[SIZE]
{
    new int [1]  { 75 },
    new int [2]  { 95, 64 },
    new int [3]  { 17, 47, 82 },
    new int [4]  { 18, 35, 87, 10 },
    new int [5]  { 20,  4, 82, 47, 65 },
    new int [6]  { 19, 01, 23, 75, 03, 34 },
    new int [7]  { 88, 02, 77, 73, 07, 63, 67 },
    new int [8]  { 99, 65, 04, 28,  6, 16, 70, 92 },
    new int [9]  { 41, 41, 26, 56, 83, 40, 80, 70, 33 },
    new int [10] { 41, 48, 72, 33, 47, 32, 37, 16, 94, 29 },
    new int [11] { 53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14 },
    new int [12] { 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57 },
    new int [13] { 91, 71 ,52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48 },
    new int [14] { 63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31 },
    new int [15] {  4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60,  4, 23 },
};

int main()
{
    // start at the 2nd lowest level
    for (int i = SIZE - 2; i >= 0; i--)
    {
        int currentLevel = i;
        int lowerLevel = currentLevel + 1;

        for (int j = 0; j <= i; j++)
        {
            int leftChild = pyramid[lowerLevel][j];
            int rightChild= pyramid[lowerLevel][j + 1];

            pyramid[currentLevel][j] += (leftChild > rightChild) ? leftChild : rightChild;
        }
    }
    
    std::cout << pyramid[0][0] << std::endl;

    for (int i = 0; i < SIZE; i++)
        delete [] pyramid[i];
        
    delete [] pyramid;

    return 0;
}