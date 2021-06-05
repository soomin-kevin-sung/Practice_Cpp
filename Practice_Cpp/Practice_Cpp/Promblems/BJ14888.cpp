#include <iostream>

using namespace std;

int n;
int arr[11];
int op[4];

int maxVal = -0x7fffffff, minVal = 0x7fffffff;

void DFS(int d, int val) {
	if (d == n) {
		maxVal = max(maxVal, val);
		minVal = min(minVal, val);
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (op[i])
			{
				op[i]--;

				switch (i)
				{
				case 0:
					DFS(d + 1, val + arr[d]);
					break;
				case 1:
					DFS(d + 1, val - arr[d]);
					break;
				case 2:
					DFS(d + 1, val * arr[d]);
					break;
				case 3:
					DFS(d + 1, val / arr[d]);
					break;
				}

				op[i]++;
			}
		}
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);

	for (int i = 0; i < 4; i++)
		scanf("%d", op + i);

	DFS(1, arr[0]);

	printf("%d %d", maxVal, minVal);

	return 0;
}