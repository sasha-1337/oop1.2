#include "Vector.h"
#include <iostream>

using namespace std;

void Vector::SetI(int value)
{
    i = value;
}

bool Vector::Init(int N)
{
    if (N > 0)
    {
        SetI(N);
        return true;
    }
    else
        return false;
}

void Vector::Read(int size)
{
    Init(size);
    for (int n = 0; n < size; n++)
    {
        cout << " arr[" << n << "] = "; cin >> a[n];
    }
}

void Vector::Display()
{
    for (int n = 0; n < i; n++)
        cout << a[n] << " ";
    cout << endl << endl;
}

int Vector::Max()
{
   int max = 0;
    for (int n = 0; n < i; n++)
        if (max < a[n])
            max = a[n];
    return max;
}

int Vector::Min()
{
    int min = 10;
    for (int n = 0; n < i; n++)
        if (min > a[n])
            min = a[n];
    return min;
}

void Vector::SortHigh()
{
    int tmp;
    for (int n = 0; n < i - 1; n++)
        for (int m = 0; m < i - n - 1; m++)
            if (a[m] > a[m + 1])
            {
                tmp = a[m];
                a[m] = a[m + 1];
                a[m + 1] = tmp;
            }
}

void Vector::SortLow()
{
   int tmp;
    for (int n = 0; n < i - 1; n++)
        for (int m = n + 1; m < i; m++)
            if (a[n] < a[m])
            {
                tmp = a[n];
                a[n] = a[m];
                a[m] = tmp;
            }
}