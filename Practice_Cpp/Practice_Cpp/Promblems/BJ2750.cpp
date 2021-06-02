#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	int arr[1000];
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}