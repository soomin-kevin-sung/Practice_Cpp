#include <iostream>

using namespace std;

int d[15] = { 0 };

int main() {
	int t, k, n;
	scanf("%d", &t);

	while (t--) {
		for (int i = 1; i <= 14; i++)
			d[i] = i;

		scanf("%d %d", &k, &n);

		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= n; j++)
				d[j] += d[j - 1];
		}

		printf("%d\n", d[n]);
	}

	return 0;
}