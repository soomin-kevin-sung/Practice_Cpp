#include <iostream>

using namespace std;

void QuickSort(int* start, int* end) {
	if (start >= end)
		return;

	int pivot = *start;
	int* left = start + 1;
	int* right = end;

	while (left <= right) {
		while (*left < pivot) left++;
		while (*right > pivot) right--;

		if (left < right)
			swap(*left, *right);
	}

	swap(*start, *right);
 	QuickSort(start, right - 1);
	QuickSort(right + 1, end);
}
int arr[1001];
int main() {
	int n;
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);

	QuickSort(arr, arr + n - 1);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}