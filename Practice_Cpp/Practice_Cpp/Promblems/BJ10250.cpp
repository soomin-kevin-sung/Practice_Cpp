#include <iostream>

using namespace std;

int main() {
	int t, w, h, n;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d %d", &h, &w, &n);
		if (n % h)
			printf("%d%02d\n", n % h, n / h + 1); 
		else
			printf("%d%02d\n", h, n / h);
			
	}
}