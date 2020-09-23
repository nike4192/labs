/*
 * fibonacci.cpp
 *
 *  Created on: 24 сент. 2020 г.
 *      Author: nike4
 *      
 */

#include <iostream>

using namespace std;

int main() {

	int i = 0;
	cin >> i;

	if( i != 0 )
		for(int a = 1, b = 1; i-- > 0; a=(b+=a)-a)
			cout << a << endl;

	return 0;
}
