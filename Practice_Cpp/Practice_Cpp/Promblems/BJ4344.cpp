#include <iostream>
#define MAX 10001

using namespace std;

int main() {
	int c;
	scanf("%d", &c);

	while (c--) {
		int n;
		scanf("%d", &n);

		int scores[MAX];
		double sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &scores[i]);
			sum += scores[i];
		}
		
		int c = 0;
		for (int i = 0; i < n; i++) {
			if (scores[i] > sum / n)
				c++;
		}

		printf("%.3lf%%\n", ((double)c / n) * 100);
	}

	return 0;
}