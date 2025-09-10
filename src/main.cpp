#include <iostream>
#include <string>
#include "greeting_utils.h"

using GreetingUtils::create_message;
using GreetingUtils::format_as_c_string;
using std::cout, std::cin, std::string, std::getline, std::endl;

int main(){
	string input;
	cout << "Enter Name: ";
	getline(cin, input);
	const string name = input;
	char* arr = format_as_c_string(create_message(name));
	cout << arr << endl;
	delete[] arr;
	return 0;
}

