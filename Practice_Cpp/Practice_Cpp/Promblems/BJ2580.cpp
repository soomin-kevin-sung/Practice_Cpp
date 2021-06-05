#include <iostream>

using namespace std;

int n;
int emptyCoord[81][2];
int map[9][9];

bool CanPlaceNumber(int x, int y, int n) {
	bool chk[3][10] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		if (map[x][i] == n
			|| map[i][y] == n
			|| map[(x / 3) * 3 + i / 3][(y / 3) * 3 + i % 3] == n)
			return false;
	}

	return true;
}

int DFS(int x) {
	if (x == n) {
		return 1;
	}
	else {
		for (int i = 1; i <= 9; i++)
		{
			if (CanPlaceNumber(emptyCoord[x][0], emptyCoord[x][1], i)) {
				map[emptyCoord[x][0]][emptyCoord[x][1]] = i;

				if (DFS(x + 1))
					return 1;

				map[emptyCoord[x][0]][emptyCoord[x][1]] = 0;
			}
		}
	}

	return 0;
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &map[i][j]);
			if (!map[i][j]) {
				emptyCoord[n][0] = i;
				emptyCoord[n][1] = j;
				n++;
			}
		}
	}

	DFS(0);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			printf("%d ", map[i][j]);

		printf("\n");
	}

	return 0;
}