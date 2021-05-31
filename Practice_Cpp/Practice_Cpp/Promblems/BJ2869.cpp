#include <iostream>

using namespace std;

int main() {
	int a, b, v;
	int result = 0;

	scanf("%d %d %d", &a, &b, &v);
	
	if (a == v) {
		result = 1;
	}
	else {
		v -= a;
		result = v / (a - b) + 1;
		if (v % (a - b) != 0)
			result++;
		
	}

	printf("%d", result);
	
	return 0;
}
