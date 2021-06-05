#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Person {
	int Index;
	string Name;
	int Age;
}arr[100001];

bool Compare(Person a, Person b) {
	if (a.Age == b.Age)
		return a.Index < b.Index;

	return a.Age < b.Age;
}

int main() {
	int n;
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		cin >> arr[i].Age >> arr[i].Name;
		arr[i].Index = i;
	}
	
	sort(arr, arr + n, Compare);

	for (int i = 0; i < n; i++)
		cout << arr[i].Age << ' ' << arr[i].Name << '\n';

	return 0;
}