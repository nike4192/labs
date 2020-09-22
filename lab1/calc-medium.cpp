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

	const unsigned int ASCII_DIGITS_START = 48;
	const unsigned int ASCII_DIGITS_END = 57;

	int a = 0, b = 0;
	char operator_symbol = 0;

	for (unsigned int i = 0; i < input_string.length(); ++i ) {

		char str_char = input_string[i];
		if( str_char >= ASCII_DIGITS_START &&
			str_char <= ASCII_DIGITS_END ) {

			int digit = (int)(str_char - ASCII_DIGITS_START);

			if( operator_symbol == 0 )
				a = a * 10 + digit;
			else
				b = b * 10 + digit;

		} else if(
				str_char == '+' ||
				str_char == '-' ||
				str_char == '*' ||
				str_char == '/')
			operator_symbol = str_char;

	}

	int result = 0;

	if(operator_symbol == '+')
		result = a + b;
	else if(operator_symbol == '-')
		result = a - b;
	else if(operator_symbol == '*')
		result = a * b;
	else if(operator_symbol == '/')
		result = a / b;

	cout << input_string << '=' << result;

	return 0;
}
