#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);

	// 각 문자의 빈도수 기록.
	int cnts[26] = { 0 }, maxCnt = 0;
	for (int i = 0; i < s.length(); i++)
		maxCnt = max(maxCnt, ++ cnts[s[i] - 'A']);

	// 최대 빈도수의 갯수 기록.
	// 최대 빈도수의 문자 저장.
	int maxIndex = 0;
	int numberOfMaxCnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnts[i] == maxCnt) {
			maxIndex = i;
			numberOfMaxCnt++;
		}
	}

	// 최대빈도수가 1보다 크면 "?" 출력.
	if (numberOfMaxCnt > 1)
		cout << "?";
	// 아니라면, 최대빈도수의 문자 출력.
	else
		cout << (char)(maxIndex + 'A');

	return 0;
}