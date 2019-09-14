#include <iostream>
#include <cmath>

static const double M_PI = 3.14159265359;

double MyLog(const double& V, const double& Base) {
	return std::pow(V,1/std::log(std::exp(Base)));
}
double f2(const double& X) {

	double Bunsi1 = (5 * std::exp(1) * X * X * X);
	double Bunbo1 = MyLog(16, 4);
	double Bunsi2 = (2 * M_PI * X * X);
	double Bunbo2 = MyLog(36, 6);
	double Bunsi3 = (3 * std::sqrt(2) - 7);
	double Bunbo3 = MyLog(81, 9);
	return  Bunsi1 / Bunbo1 + Bunsi2 / Bunbo2 + Bunsi3 / Bunbo3;
}

int main() {
	for (std::size_t i = 0; i < 16; i++) {
		std::cout << i<<':'<<f2(i) << std::endl;
	}
	std::cout << std::endl;
	return 0;
}