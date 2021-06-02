#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int m = x;
	if (y < m)
		m = y;

	if (w - x < m)
		m = w - x;

	if (h - y < m)
		m = h - y;

	printf("%d", m);

	return 0;
}