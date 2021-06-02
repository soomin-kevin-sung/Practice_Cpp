#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	if (n > 1) {
		bool flag = true;
		while (flag) {
			flag = false;
			for (int i = 2; i < n; i++)
			{
				if (!(n % i)) {
					printf("%d\n", i);
					n /= i;
					flag = true;
					break;
				}
			}
		}

		printf("%d", n);
	}

	return 0;
}