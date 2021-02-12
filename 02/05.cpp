#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string>

int main() {
	int N;
	int number_of_primes = 0;
	int number_to_check = 2;
	int answer;
	std::string str;
	std::cin >> N;
	for (int a = 1; a <= N; a++) {
		for (int b = 1; b <= N; b++) {
			for (int c = 1; c <= N; c++) {
				for (int d = 1; d <= N; d++) {
					if (a* a + b * b + c * c + d * d == N) {
						std::cout << std::to_string(a) + ' ' + std::to_string(b) + ' ' + std::to_string(c) + ' ' + std::to_string(d) << std::endl;
					}
				}
			}
		}
	}
	return 0;
}
