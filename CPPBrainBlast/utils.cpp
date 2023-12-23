// utils.cpp
#include "utils.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>
using std::cin;
using std::cout;
using std::ostringstream;
using std::fixed;
using std::setprecision;
using std::string;
using std::getline;
using std::chrono::system_clock;
using std::chrono::duration_cast;
using std::chrono::milliseconds;

string utils::input(string prompt) {
	string s;
	cout << prompt;
	getline(cin, s);
	return s;
}
float utils::inputFloat(string prompt) {
	float f;
	cout << prompt;
	cin >> f;
	string eatWhitespace;
	getline(cin, eatWhitespace);
	return f;
}
string utils::toString(float number, int precision) {
	ostringstream stream; //include <sstream>

	stream << fixed;
	stream << setprecision(precision); //include <iomanip>
	stream << number;

	return stream.str();
}
__int64 utils::now() {
	return system_clock::now().time_since_epoch()
		/ milliseconds(1);
}