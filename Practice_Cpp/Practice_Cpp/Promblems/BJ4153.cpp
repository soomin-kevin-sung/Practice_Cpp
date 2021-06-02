#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a + b + c == 0)
			break;

		if (pow(a, 2) + pow(b, 2) == pow(c, 2)
			|| pow(b, 2) + pow(c, 2) == pow(a, 2)
			|| pow(c, 2) + pow(a, 2) == pow(b, 2))
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}