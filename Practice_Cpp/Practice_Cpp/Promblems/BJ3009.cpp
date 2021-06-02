#include <iostream>

using namespace std;

int x[3], y[3];

bool HasPoint(int xi, int yi) {
	for (int i = 0; i < 3; i++)
	{
		if (x[i] == xi && y[i] == yi)
			return true;
	}

	return false;
}

int main() {

	int t = 0, l = 1001, b = 1001, r = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", x + i, y + i);

		t = t < y[i] ? y[i] : t;
		l = l > x[i] ? x[i] : l;
		b = b > y[i] ? y[i] : b;
		r = r < x[i] ? x[i] : r;
	}

	if (!HasPoint(l, t))
		printf("%d %d", l, t);
	else if (!HasPoint(r, t))
		printf("%d %d", r, t);
	else if (!HasPoint(r, b))
		printf("%d %d", r, b);
	else if (!HasPoint(l, b))
		printf("%d %d", l, b);

	return 0;
}