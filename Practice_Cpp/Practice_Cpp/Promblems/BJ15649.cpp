#include <iostream>

using namespace std;

int n, m;

int stack[8] = { 0 };
bool used[8] = { 0 };

void DFS(int d) {
	if (d == m) {
		for (int i = 0; i < m; i++)
			printf("%d ", stack[i]);

		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!used[i]) {
				used[i] = true;
				stack[d] = i;
				DFS(d + 1);
				used[i] = false;
			}
		}
	}
}

int main() {
	scanf("%d %d", &n, &m);

	DFS(0);

	return 0;
}