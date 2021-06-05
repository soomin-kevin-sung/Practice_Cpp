#include <iostream>
#include <cmath>

using namespace std;

int n;
int map[16];

bool CanPlacePiece(int x, int y) {
	map[x] = y;

	bool result = true;
	for (int i = 0; i < x; i++) {
		if (map[i] == map[x]) {
			result = false;
			break;
		}

		if (abs(map[i] - map[x]) == abs(i - x)) {
			result = false;
			break;
		}
	}

	if (!result)
		map[x] = 0;

	return result;
}

int DFS(int x, int c) {
	if (c == n) {
		return 1;
	}
	else {
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (CanPlacePiece(x, i)) {
				map[x] = i;
				cnt += DFS(x + 1, c + 1);
				map[x] = 0;
			}
		}

		return cnt;
	}
}

int main() {
	scanf("%d", &n);
	printf("%d", DFS(0, 0));
	return 0;
}