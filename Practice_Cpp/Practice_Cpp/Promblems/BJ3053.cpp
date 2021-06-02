#include <iostream>
#include <cmath>
#define M_PI       3.14159265358979323846

using namespace std;

int main() {
	double r;
	scanf("%lf", &r);

	printf("%lf\n%lf", pow(r, 2) * M_PI, 2 * r * r);
	return 0;
}