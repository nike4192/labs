#include <iostream>

using namespace std;

int* GenerateRandomArray(const int min, const int max, const int size)
{
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = (max - min) * rand() / RAND_MAX + min;
    }

    return array;
}

int** TransformTo2D(const int* const array, const int size, const int imax, const int jmax)
{
    int** a2d = new int*[imax];

    for (int i = 0; i < imax; i++)
    {
        a2d[i] = new int[jmax];

        for (int j = 0; j < jmax; j++)
        {
            int ei = j + jmax * i;
            a2d[i][j] = (ei < size) ? array[ei] : 0;
        }
    }

    return a2d;
}

void Free2DArray(int** array, const int imax, const int jmax)
{
    for (int i = 0; i < imax; i++)
        delete[] array[i];
    delete[] array;
}

void PrintArray2D(const int** array, const int imax, const int jmax)
{
    for (int i = 0; i < imax; i++) {
        for (int j = 0; j < jmax; j++)
            printf("%-5i", array[i][j]);
        cout << endl;
    }
}

void PrintArray(const int* start, const int* end) {

    int* i = (int*)start;
    int* preend = (int*)end - 1; 

    for (; i < preend ;)
        cout << *i++ << ' ';
    cout << *i << endl;
}

int main()
{
    const int RANGE_MIN = -1000;
    const int RANGE_MAX =  1000;

    int imax = 4;
    int jmax = 3;

    int N = imax * jmax;

    int* a = GenerateRandomArray(RANGE_MIN, RANGE_MAX, N);
    PrintArray(&*a, &*a + N);

    int** a2d = TransformTo2D(a, N, imax, jmax);

    delete[] a;

    PrintArray2D((const int**)a2d, imax, jmax);
    Free2DArray(a2d, imax, jmax);
}