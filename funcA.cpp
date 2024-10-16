#include "funcA.h"
#include <cmath>

double factorial(int num) {
	if (num <= 1) return 1;
	return num * factorial(num - 1);
}

double FuncA::calculateCosine(double x, int n) {
	int max_terms = 3;
	double result = 0;
	for (int i = 0; i < max_terms; ++i) {
		result += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
	}
	return result;
}
