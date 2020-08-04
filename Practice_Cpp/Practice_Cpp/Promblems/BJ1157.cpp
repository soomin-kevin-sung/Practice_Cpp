#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);

	// �� ������ �󵵼� ���.
	int cnts[26] = { 0 }, maxCnt = 0;
	for (int i = 0; i < s.length(); i++)
		maxCnt = max(maxCnt, ++ cnts[s[i] - 'A']);

	// �ִ� �󵵼��� ���� ���.
	// �ִ� �󵵼��� ���� ����.
	int maxIndex = 0;
	int numberOfMaxCnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnts[i] == maxCnt) {
			maxIndex = i;
			numberOfMaxCnt++;
		}
	}

	// �ִ�󵵼��� 1���� ũ�� "?" ���.
	if (numberOfMaxCnt > 1)
		cout << "?";
	// �ƴ϶��, �ִ�󵵼��� ���� ���.
	else
		cout << (char)(maxIndex + 'A');

	return 0;
}