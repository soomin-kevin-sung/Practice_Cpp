#include <iostream>

using namespace std;

int main() {
	int n, m, max = -1000001, min = 1000001;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		max = m > max ? m : max;
		min = m < min ? m : min;
	}

	printf("%d %d", min, max);

	return 0;
}