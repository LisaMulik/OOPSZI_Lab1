#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double x, f;

	x = 0;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));

	printf("x = %f\n", x);
	printf("f = %f\n", f);

	cin >> x;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));

	printf("x = %f\n", x);
	printf("f = %f\n", f);
	
	system("pause");
	return 0;
}
