#include <iostream>
#include "funcA.h"

int main() {
	FuncA func;
	double x = 0.5;
	int n = 5;

	double result = func.calculateCosine(x, n);
	std::cout << "Cosine of " << x << "with" << n << "terms:" << result <<std::endl;
	return 0;
}
