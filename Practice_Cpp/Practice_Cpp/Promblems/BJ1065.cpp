#include <iostream>

using namespace std;

int GetDigitArray(int n, int* arr) {
	int c = 0;

	if (n / 1000) {
		arr[c++] = n / 1000;
		n %= 1000;
	}
		
	if (c || n / 100) {
		arr[c++] = n / 100;
		n %= 100;
	}

	if (c || n / 10) {
		arr[c++] = n / 10;
		n %= 10;
	}

	arr[c++] = n;

	return c;
}

bool IsHanNumber(int n) {
	int arr[4] = { 0 };
	int len = GetDigitArray(n, arr);
	int diff = arr[0] - arr[1];

	for (int i = 0; i < len - 1; i++) {
		if (arr[i] - arr[i + 1] != diff)
			return false;
	}

	return true;
}

int main() {
	int n, c = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (IsHanNumber(i))
			c++;
	}

	printf("%d", c);

	return 0;
}