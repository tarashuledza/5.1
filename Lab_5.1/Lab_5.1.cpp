#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y);
int main()
{
	double s;
	double t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (h(s * s, t * t) + h(s + t, 1) * h(s + t, 1)) /
		(1 + h(s * t, 2) * h(s * t, 2));

	cout << "c = " << c << endl;
	return 0;
}
double h(const double x, const double y)
{
	return ((x * y) / 1 + (x * x) * (y * y));
};
