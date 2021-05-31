#include <iostream>

using namespace std;

int d[50001] = { 0, -1, -1, 1, -1, 1 };

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 6; i <= n; i++) {
		if (d[i - 3] < 0 && d[i - 5] < 0)
			d[i] = -1;
		else if (d[i - 3] < 0)
			d[i] = d[i - 5] + 1;
		else if (d[i - 5] < 0)
			d[i] = d[i - 3] + 1;
		else
			d[i] = d[i - 3] < d[i - 5] ? d[i - 3] + 1 : d[i - 5] + 1;
	}

	printf("%d", d[n]);

	return 0;
}