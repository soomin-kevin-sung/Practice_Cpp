#include <iostream>>

using namespace std;

bool primeChk[1000001] = { true, true };

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; i * j <= n; j++)
			primeChk[i * j] = true;
	}

	for (int i = m; i <= n; i++) {
		if (!primeChk[i])
			printf("%d\n", i);
	}

	return 0;
}