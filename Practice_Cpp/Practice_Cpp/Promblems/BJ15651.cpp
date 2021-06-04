#include <iostream>

using namespace std;

int n, m;

int stack[8] = { 0 };

void DFS(int d, int k) {
	if (d == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", stack[i]);

		printf("\n");
	}
	else {
		for (int i = k ; i <= n; i++) {
			stack[d] = i;
			DFS(d + 1, i);
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);

	DFS(0, 1);

	return 0;
}