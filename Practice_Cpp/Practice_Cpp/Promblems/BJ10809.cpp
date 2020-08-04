#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (char chr = 'a'; chr <= 'z'; chr++) {
		int p = 0;
		p = s.find(chr, p);
		cout << p << " ";
	}

	return 0;
}