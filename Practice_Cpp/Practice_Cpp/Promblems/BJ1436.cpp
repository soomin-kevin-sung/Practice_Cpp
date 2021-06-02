#include <iostream>
#include <string>

using namespace std;

bool NumberOfSix(int n) {
	string str = to_string(n);
	return str.find("666") != string::npos;
}

int main() {
	int n;
	scanf("%d", &n);

	int i = 666, cnt = 0;
	while (cnt < n) {
		if (NumberOfSix(i++))
			cnt++;
	}

	printf("%d\n", i - 1);

	return 0;
}