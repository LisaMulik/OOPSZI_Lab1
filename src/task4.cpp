#include <iostream>
#include <math.h>

using namespace std;

void f();
double x, res;

int main()
{
	cin >> x;
	f();

	printf("x = %f\n", x);
	printf("result = %f\n", res);
	
	system("pause");
	return 0;
}

void f()
{
	res = (cos(x) + sin(x)) / (cos(x) - sin(x));
}
