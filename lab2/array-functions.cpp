/*
 * main.cpp
 *
 *  Created on: 25 сент. 2020 г.
 *      Author: nike4
 */

#include <iostream>

using namespace std;

int* FindMax(const int* start, const int* end) {

	int* max = (int*)start;

	for (int* i = (int*)start; i < end; i++)
		if(*i > *max) max = i;

	return max;

}

void MySort(int* start, int* end) { // bubble sort

	bool swapped;
	do { swapped = false;

		for(int* i = start; i < end; i++) {

			if(*i > *(i + 1) ) {
				int temp = *i;
				*i = *(i + 1);
				*(i + 1) = temp;

				swapped = true;
			}
		}
	}
	while(swapped);
}

void PrintArray(const int* start, const int* end) {

    int* i = (int*)start;
    int* preend = (int*)end - 1; 

    for (; i < preend ;)
        cout << *i++ << ' ';
    cout << *i << endl;
}

int main() {

	int N = 0;
	int min = -100, max = 100;

	cin >> N;

	if( N > 0 ) {

		int a[N];
	    srand(time(0));
		for(int i = 0; i < N; i++) {
			a[i] = (int)(max - min) * (rand() / (double)RAND_MAX) + min;
		}

		int* start = &*a;
		int* end = (start + N);

        PrintArray((const int*)start, (const int*)end);
        cout << *FindMax((const int*)start, (const int*)end) << endl;
        MySort(start, end);
        PrintArray((const int*)start, (const int*)end);

	}

	return 0;
}
