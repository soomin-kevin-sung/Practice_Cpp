#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	
	while (t--) {
		int r;
		char sTemp[20];
		scanf("%d %s", &r, sTemp);

		int len = strlen(sTemp);
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < r; j++)
				printf("%c", sTemp[i]);
		}

		printf("\n");
	}

	return 0;
}