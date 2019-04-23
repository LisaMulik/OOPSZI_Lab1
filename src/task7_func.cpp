#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;

double x, res;

void f()
{
	res = 1 - (1/4 * pow(sin(2*x), 2)) + cos(2*x);
}
