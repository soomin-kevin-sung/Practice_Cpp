#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	int r = 1, c = 1;
	while (c < n)
		c += r++ * 6;

	printf("%d", r);

	return 0;
}