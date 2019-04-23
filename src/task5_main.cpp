#include <iostream>
#include <math.h>

using namespace std;

double f(double);

int main()
{
	double x, y;

	cin >> x;
	y = f(x);

	printf("x = %f\n", x);
	printf("f = %f\n", y);
	
	system("pause");
	return 0;
}
