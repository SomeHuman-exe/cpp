#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string>

int main() {

	int N;
	std::string str;
	std::cin >> N;
	int N1 = N;
	for (int i = 2; i < N1; i++) {
		if ((N % i) == 0) {
			str = str + std::to_string(i) + ' ';
			N = N / i;
			i = 1;
		}
	}
	std::cout << str;
	return 0;
}
