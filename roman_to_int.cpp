#include <iostream>


int romanToInt(std::string s) {

	int sum{ 0 };

	for (int i = 0, j = 1; j < s.length(); i++, j++) {

		if (s[i] == 'I' && s[j] == 'V') {
			sum += 4;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		else if (s[i] == 'I' && s[j] == 'X') {
			sum += 9;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		else if (s[i] == 'X' && s[j] == 'L') {
			sum += 40;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		else if (s[i] == 'X' && s[j] == 'C') {
			sum += 90;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		else if (s[i] == 'C' && s[j] == 'D') {
			sum += 400;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		else if (s[i] == 'C' && s[j] == 'M') {
			sum += 900;
			s.erase(i, 2);
			i = i - 1;
			j = j - 1;
		}
		std::cout << sum << '\n';
	}

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'I') {
			sum += 1;
		}
		else if (s[i] == 'V') {
			sum += 5;
		}
		else if (s[i] == 'X') {
			sum += 10;
		}
		else if (s[i] == 'L') {
			sum += 50;
		}
		else if (s[i] == 'C') {
			sum += 100;
		}
		else if (s[i] == 'D') {
			sum += 500;
		}
		else if (s[i] == 'M') {
			sum += 1000;
		}
		std::cout << sum << '\n';
	}

	return sum;
}


int main() {

	std::string s{};
	std::cin >> s;

	std::cout << romanToInt(s);

	return 0;
}