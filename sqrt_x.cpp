#include <iostream>


int mySqrt(unsigned int x) {

	unsigned int sqrt{};
	unsigned long long temp_sqr{};
	unsigned long long temp_sqr_plus{};

	for (unsigned long long i = 1; i * i < x + 1; i++) {
		temp_sqr = i * i;
		temp_sqr_plus = (i + 1) * (i + 1);

		if (temp_sqr == x) {
			sqrt = i;
			return sqrt;
		}
		else if (temp_sqr < x && temp_sqr_plus > x) {
			sqrt = i;
			return sqrt;
		}
	}

	return sqrt;
}


int main() {

	std::cout << mySqrt(8);

	return 0;
}