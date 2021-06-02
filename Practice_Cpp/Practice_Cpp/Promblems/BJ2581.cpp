#include <iostream>

using namespace std;

bool IsPrime(int n) {
	for (int i = 2; i < n; i++)
	{
		if (!(n % i))
			return false;
	}

	return true;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	n = n == 1 ? 2 : n;

	bool flag = false;
	int sum = 0, min = 10001;
	for (int i = n; i <= m; i++) {
		if (IsPrime(i))
		{
			sum += i;
			min = i < min ? i : min;
			flag = true;
		}
	}

	if (!flag)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}