#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++) {
		int m = i;
		int sum = i;

		sum += m / 1000000;
		m %= 1000000;
		sum += m / 100000;
		m %= 100000;
		sum += m / 10000;
		m %= 10000;
		sum += m / 1000;
		m %= 1000;
		sum += m / 100;
		m %= 100;
		sum += m / 10;
		m %= 10;
		sum += m;

		if (sum == n)
		{
			printf("%d", i);
			return 0;
		}
	}

	printf("0");

	return 0;
}