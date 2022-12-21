#include <iostream>
#include <sstream>
#include <unordered_map>
#include "RemoveSpecialCharsRule.h"

using namespace std;

RemoveSpecialCharsRule::RemoveSpecialCharsRule(vector<string> temp) {
	this->_specialChars = temp;
}
string RemoveSpecialCharsRule::rename(string origin) {
	unordered_map<string, bool> mp;
	for (int i = 0; i < this->_specialChars.size(); i++) {
		mp[this->_specialChars[i]] = true;
	}
	stringstream builder;

	for (int i = 0; i < origin.size(); i++) {
		string s(1, origin[i]);
		if (mp[s]) {
			builder << " ";
		}
		else {
			builder << origin[i];
		}
	}
	string result = builder.str();

	return result;
}

string RemoveSpecialCharsRule::toString() {
	return "RemoveSpecialCharsRule";
}