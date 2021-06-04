#include <iostream>
#include <algorithm>

using namespace std;

struct Point
{
	int X, Y;
}points[100000];

bool Compare(Point a, Point b) {
	if (a.Y == b.Y)
		return a.X < b.X;

	return a.Y < b.Y;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &points[i].X, &points[i].Y);

	sort(points, points + n, Compare);

	for (int i = 0; i < n; i++)
		printf("%d %d\n", points[i].X, points[i].Y);

	return 0;
}