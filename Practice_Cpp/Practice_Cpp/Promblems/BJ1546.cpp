#include <iostream>

using namespace std;

int main() {
	int n, m, sum = 0, max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		sum += m;
		max = m > max ? m : max;
	}

	printf("%lf", ((double)sum / max * 100) / n);

	return 0;
}