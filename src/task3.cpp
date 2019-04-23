#include <iostream>
#include <math.h>

using namespace std;

double f(double x);

int main()
{
	double x, f;

	cin >> x;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));

	printf("x = %f\n", x);
	printf("f = %f\n", f);
	
	system("pause");
	return 0;
}

double f(double x)
{
	return (cos(x) + sin(x)) / (cos(x) - sin(x));
}
