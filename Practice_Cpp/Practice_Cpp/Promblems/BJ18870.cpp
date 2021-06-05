#include <iostream>
#include <algorithm>

using namespace std;

int result[1000001];

struct Data {
	int Index;
	int Value;
}datas[1000001];

bool Compare(Data a, Data b) {
	return a.Value < b.Value;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &datas[i].Value);
		datas[i].Index = i;
	}
	
	sort(datas, datas + n, Compare);

	int rank = 0;
	for (int i = 1; i < n; i++) {
		if (datas[i].Value != datas[i - 1].Value)
			rank++;

		result[datas[i].Index] = rank;
	}

	for (int i = 0; i < n; i++)
		printf("%d ", result[i]);

	return 0;
}