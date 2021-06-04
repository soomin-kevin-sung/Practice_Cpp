#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[500001], cnt[8002] = { 0 }, maxFreq = 0, sum = 0;

int main() {
	int n, m;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
		sum += arr[i];

		if (maxFreq < ++cnt[arr[i] + 4000])
			maxFreq = cnt[arr[i] + 4000];
	}
		
	sort(arr, arr + n);

	int freqIndex = 0;
	for (int i = -4000; i <= 4000; i++) {
		if (cnt[i + 4000] == maxFreq) {
			if (freqIndex)
			{
				freqIndex = i;
				break;
			}
			else {
				freqIndex = i;
			}
		}
	}
		
	printf("%d\n", (int)round((double)sum / n));
	printf("%d\n", arr[n / 2]);
	printf("%d\n", freqIndex);
	printf("%d", arr[n - 1] - arr[0]);
	
	return 0;
}