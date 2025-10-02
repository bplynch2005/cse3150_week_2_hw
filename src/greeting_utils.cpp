#include <iostream>
#include <string>
#include "greeting_utils.h"

using std::cout, std::endl, std::string;

namespace GreetingUtils{
	string create_message(const string& name){
		string msg = "Hello, " + name + "!";
		return msg;	
	}

	char* format_as_c_string(const string& msg){
		size_t msgLen = msg.size();
		char* arr = new char[msgLen+1];
		for(size_t i = 0; i < msgLen; ++i){
			arr[i] = msg[i];
		}
		arr[msgLen] = '\0';
		return arr;
	}
}

