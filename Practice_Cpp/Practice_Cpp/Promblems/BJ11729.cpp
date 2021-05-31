#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void hanoi(int n, int f, int t, int v) {
	if (n == 1) {
		printf("%d %d\n", f, t);
		return;
	}

	hanoi(n - 1, f, v, t);
	hanoi(1, f, t, v);
	hanoi(n - 1, v, t, f);
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", (int)pow(2, n) - 1);

	hanoi(n, 1, 3, 2);

	return 0;
}