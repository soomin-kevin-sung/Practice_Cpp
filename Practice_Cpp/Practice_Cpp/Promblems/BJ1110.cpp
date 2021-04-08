#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int t = n, c = 0, p = 0;

	do {
		p = t / 10 + t % 10;
		t = t % 10 * 10 + p % 10;
		c++;
	} while (t != n);

	printf("%d", c);

	return 0;
}