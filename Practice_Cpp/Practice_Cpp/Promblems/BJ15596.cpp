#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
	return accumulate(a.begin(), a.end(), 0LL);
}