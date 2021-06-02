#include <iostream>

using namespace std;

char map[50][50];

int NumberOfWrongTiles(int x, int y) {
	char chars[2] = { 'W', 'B' };
	int cnt = 0;
	int c = map[x][y] == chars[0] ? 0 : 1;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (chars[c] != map[x + i][y + j])
				cnt++;

			c = (c + 1) % 2;
		}
		c = (c + 1) % 2;
	}

	return cnt > 32 ? 64 - cnt : cnt;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s", map + i);

	int answer = 2501;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int v = NumberOfWrongTiles(i, j);
			if (v < answer)
				answer = v;
		}
	}

	printf("%d", answer);
	
	return 0;
}