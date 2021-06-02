#include <iostream>

using namespace std;

bool IsPrime(int n) {
	if (n == 1)
		return false;

	for (int i = 2; i < n; i++)
	{
		if (!(n % i))
			return false;
	}

	return true;
}

int main() {
	int n, m;
	scanf("%d", &n);

	int c = 0;
	while (n--) {
		scanf("%d", &m);
		if (IsPrime(m))
			c++;
	}

	printf("%d", c);

	return 0;
}