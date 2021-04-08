#include <iostream>

using namespace std;

int main() {
	int a1, a2;
	scanf("%d %d", &a1, &a2);

	int a5 = a2 / 100 * a1;
	a2 %= 100;

	int a4 = a2 / 10 * a1;
	a2 %= 10;

	int a3 = a2 * a1;

	int a6 = a5 * 100 + a4 * 10 + a3;
	printf("%d\n%d\n%d\n%d", a3, a4, a5, a6);

	return 0;
}