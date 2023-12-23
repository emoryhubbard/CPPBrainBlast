#pragma once
#include <iostream>
using std::string;
namespace utils {
	string input(string prompt);
	float inputFloat(string prompt);
	string toString(float num, int precision);
	__int64 now();
}