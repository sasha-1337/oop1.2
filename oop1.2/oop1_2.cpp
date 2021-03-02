#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
	int N;
    cout << " Amount of elements - "; cin >> N;
	Vector x(N);
	x.Read(N);
	x.Display();

	cout << " MAX - " << x.Max() << endl;
	cout << " MIN - " << x.Min() << endl;

	cout << " sort high->low   ";
	x.SortLow(); // сортування за спаданням
	x.Display();

	cout << " sort low->high   ";
	x.SortHigh(); // сортування за зростанням
	x.Display();

	return 0;
}
