#include <iostream>

using namespace std;

int main() {
	int n, max = -1, maxIndex = -1;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (max < n)
		{
			max = n;
			maxIndex = i + 1;
		}
	}

	printf("%d\n%d", max, maxIndex);

	return 0;
}