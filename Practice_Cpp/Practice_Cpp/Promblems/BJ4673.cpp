#include <iostream>
#define MAX 10001
using namespace std;

bool chks[MAX] = { 0 };

void D(int n) {
	int t = n;
	if (n >= 1000) {
		t += n / 1000;
		n %= 1000;
	}

	if (n >= 100) {
		t += n / 100;
		n %= 100;
	}

	if (n >= 10) {
		t += n / 10;
		n %= 10;
	}

	t += n;
	if (chks[t] || t >= MAX)
		return;

	chks[t] = true;

	D(t);
}

int main() {
	for (int i = 1; i < MAX; i++) {
		D(i);
	}
	
	for (int i = 1; i < MAX; i++) {
		if (!chks[i])
			printf("%d\n", i);
	}

	return 0;
}