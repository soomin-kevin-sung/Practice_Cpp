#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<string> Split(const string& data, const char delimiter = ' ') {
	stringstream ss(data);
	string token;
	vector<string> result;

	while (getline(ss, token, delimiter))
		result.push_back(token);

	return result;
}

int main() {
	string s;

	getline(cin, s);

	vector<string> result = Split(s, ' ');

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";
		

	return 0;
}