#include <iostream>

using namespace std;

int main() {
	int n, r[43] = { 0 }, c = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (!r[n % 42])
			c++;

		r[n % 42] ++;
	}

	printf("%d", c);

	return 0;
}