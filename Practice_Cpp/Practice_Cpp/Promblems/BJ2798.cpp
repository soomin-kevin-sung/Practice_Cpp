#include <iostream>

using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int card[101];
	for (int i = 0; i < n; i++)
		scanf("%d", card + i);
	
	int sum = 0, answer = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = card[i] + card[j] + card[k];
				if (sum <= m && answer < sum)
					answer = sum;
			}
		}
	}

	printf("%d", answer);

	return 0;
}