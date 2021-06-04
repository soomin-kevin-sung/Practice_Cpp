#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool Compare(string a, string b) {
	if (a.size() == b.size())
		return a < b;

	return a.size() < b.size();
}

int main() {
	int n;
	scanf("%d", &n);

	string arr[20001];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, Compare);

	cout << arr[0] << '\n';
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] != arr[i])
			cout << arr[i] << '\n';
	}
		

	return 0;
}