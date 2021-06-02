#include <iostream>

using namespace std;

bool isPrime[10001] = { 1, 1, };

void GenerateEratos() {
	for (int i = 2; i <= 10000; i++) {
		for (int j = 2; i * j <= 10000; j++)
			isPrime[i * j] = true;
	}
}

int main() {
	GenerateEratos();
	
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);

		int minDiff = 10000, a, b;
		for (int i = n / 2; i <= 10000; i++)
		{
			if (!isPrime[i] && !isPrime[n - i]
				&& i - (n - i) < minDiff) {
				a = n - i;
				b = i;
				minDiff = b - a;
			}
		}

		printf("%d %d\n", a, b);
	}

	return 0;
}