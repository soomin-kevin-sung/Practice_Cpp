#include <iostream>
#define MAX 7000

using namespace std;

bool result[MAX][MAX];

/// <summary>
/// ������ �մ� �Լ�.
/// </summary>
/// <param name="x">�»�� x��ǥ</param>
/// <param name="y">�»�� y��ǥ</param>
/// <param name="size">ũ��</param>
void MakeHole(int x, int y, int size) {
	int len = size / 3;

	for (int i = x + len; i < x + len * 2; i++) {
		for (int j = y + len; j < y + len * 2; j++)
			result[i][j] = true;
	}
}

/// <summary>
/// ��� ������ �վ����� �Լ�
/// </summary>
/// <param name="x">�»�� x��ǥ</param>
/// <param name="y">�»�� y��ǥ</param>
/// <param name="n"></param>
void Solve(int x, int y, int n) {
	if (n == 1)
		return;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Solve(x + i * n, y + j * n, n / 3);

			MakeHole(x + i * n, y + j * n, n);
		}
	}
}

int main() {
	int n;
	scanf("%d", &n); // �Է�.

	Solve(0, 0, n); // �Լ� ����.

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf(result[i][j] ? " " : "*");

		printf("\n");
	}

	return 0;
}