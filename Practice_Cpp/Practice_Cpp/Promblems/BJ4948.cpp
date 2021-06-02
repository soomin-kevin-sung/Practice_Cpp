#include <iostream>

using namespace std;

bool isPrime[246913] = { true, true };

void GenerateEratos() {
	for (int i = 2; i < 246913; i++) {
		for (int j = 2; i * j < 246913; j++)
			isPrime[i * j] = true;
	}
}

int main() {
	GenerateEratos();

	int n;
	while (1) {
		scanf("%d", &n);

		if (!n)
			break;

		int cnt = 0;
		for (int i = n + 1; i <= n * 2; i++)
			cnt += !isPrime[i];

		printf("%d\n", cnt);
	}

	return 0;
}