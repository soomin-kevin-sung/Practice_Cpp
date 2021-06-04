#include <iostream>

using namespace std;

int cnt[10001] = { 0 };

int main() {
	int n, m;
	scanf("%d", &n);

	while (n--)
	{
		scanf("%d", &m);
		cnt[m]++;
	}

	for (int i = 1; i < 10001; i++) {
		while(cnt[i]--)
			printf("%d\n", i);
	}

	return 0;
}