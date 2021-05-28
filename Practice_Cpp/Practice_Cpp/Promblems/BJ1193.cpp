#include <iostream>

using namespace std;

int main() {
	int x;
	scanf("%d", &x);

	
	int r = 0, c = 0, d = 1;
	while (--x) {
		c += d;
		r -= d;
		
		if (r < 0) {
			r = 0;
			d *= -1;
		}

		if (c < 0) {
			c = 0;
			d *= -1;
		}
	}

	printf("%d/%d", r + 1, c + 1);

	return 0;
}