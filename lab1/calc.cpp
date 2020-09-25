/*
 * main.cpp
 *
 *      Author: nike4
 */

#include <iostream>

using namespace std;


int main() {

	int x, y;
	char z;

	cin >> x >> z >> y;

	double result;

	     if (z == '+') result = x + y;
	else if (z == '-') result = x - y;
	else if (z == '*') result = x * y;
	else if (z == '/') result = x / y;

	cout << x << z << y << '=' << result;

	return 0;
}
