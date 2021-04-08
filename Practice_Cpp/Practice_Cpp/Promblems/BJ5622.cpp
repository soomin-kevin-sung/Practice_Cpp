#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	char tables[8][5] = {
		"ABC ",
		"DEF ",
		"GHI ",
		"JKL ",
		"MNO ",
		"PQRS",
		"TUV ",
		"WXYZ"
	};

	char sTemp[15];
	scanf("%s", sTemp);

	int len = strlen(sTemp), sum = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 8; j++) {
			for (int k = 0; k < 4; k++) {
				if (tables[j][k] == sTemp[i]) {
					sum += j + 3;
					break;
				}
			}	
		}
	}

	printf("%d", sum);

	return 0;
}