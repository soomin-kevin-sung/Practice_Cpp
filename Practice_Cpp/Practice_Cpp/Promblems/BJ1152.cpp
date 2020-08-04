#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	string s;

	getline(cin, s);

	stringstream sstream(s);
	vector<string> result;
	string token;

	int numberOfWords = 0;
	while (getline(sstream, token, ' ')) {
		if (token.size() > 0)
			numberOfWords++;
	}

	cout << numberOfWords;

	return 0;
}