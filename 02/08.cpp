#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string>


int main() {
	int N;
	int count = 0;
	std::string str;
	std::cin >> str;
	std::cout << str.back() << std::endl;
	int max_1 = int(str[0]) - int('0');
	int max_2 = int(str[0]) - int('0');
	int min_1 = int(str[0]) - int('0');
	int min_2 = int(str[0]) - int('0');
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if ((int(str[i]) - int('0')) > max_1) {
			max_1 = int(str[i]) - '0';
		}
	}
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if (((int(str[i]) - int('0')) > max_2) & ((int(str[i]) - int('0')) != max_1)) {
			max_2 = int(str[i]) - '0';
		}
	}
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if ((int(str[i]) - int('0')) < min_1) {
			min_1 = int(str[i]) - '0';
		}
	}
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if (((int(str[i]) - int('0')) < min_2) & ((int(str[i]) - int('0')) != min_1)) {
			min_2 = int(str[i]) - '0';
		}
	}
	std::cout << str << "; maximums are " << max_1 << ' ' << max_2 << "; minimums are " << min_1 << ' ' << min_2;
	return 0;
}
