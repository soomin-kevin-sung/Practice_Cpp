#include <iostream>
#include <algorithm>

using namespace std;

int n, arr[10000001];

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}

// 10 3 5 9 8 1 7 6 11 10 2