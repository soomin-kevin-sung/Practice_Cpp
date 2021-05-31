#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[10001] = { 0 }, b[10001] = { 0 }, r[10001] = { 0 };

	scanf("%s %s", a, b);

	int aIndex = strlen(a), bIndex = strlen(b), carry = 0;
	while (aIndex || bIndex) {
		int val = carry;
		if (aIndex)
			val += a[--aIndex] - '0';

		if (bIndex)
			val += b[--bIndex] - '0';

		carry = val / 10;
	
		int i = (aIndex > bIndex) ? aIndex : bIndex;
		r[i] = val % 10 + '0';
	}

	if (carry)
		printf("%d", carry);

	printf("%s", r);

	return 0;
}