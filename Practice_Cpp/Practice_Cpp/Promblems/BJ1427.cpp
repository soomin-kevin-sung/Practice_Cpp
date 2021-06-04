#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

bool compare(char a, char b) {
	return a > b;
}

int main() {
	char s[10];
	scanf("%s", s);

	sort(s, s + strlen(s), compare);

	printf("%s", s);

	return 0;
}