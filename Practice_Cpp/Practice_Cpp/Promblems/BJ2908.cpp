#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	stringstream ss;

	int aInt = 0;
	ss.str(a);
	ss >> aInt;
	
	// Init Stream Flag.
	ss.clear();

	int bInt = 0;
	ss.str(b);
	ss >> bInt;

	if (aInt > bInt)
		cout << aInt;
	else
		cout << bInt;

	return 0;
}