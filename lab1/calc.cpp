/*
 * main.cpp
 *
 *      Author: nike4
 */

#include <iostream>

using namespace std;

int main() {

	string input_string;
	cin >> input_string;

	const unsigned int ASCII_DIGITS_OFFSET = 48;

	int a = input_string[0] - ASCII_DIGITS_OFFSET,
		b = input_string[2] - ASCII_DIGITS_OFFSET;

	char operation_symbol = input_string[1];

	if(operation_symbol == '+')
		result = a + b;
	else if(operation_symbol == '-')
		result = a - b;
	else if(operation_symbol == '*')
		result = a * b;
	else if(operation_symbol == '/')
		result = a / b;

	cout << input_string << '=' << result;

	return 0;
}
