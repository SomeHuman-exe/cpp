#include <iostream>
#include <math.h>

int main() {

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i; j++) {
			std::cout << ' ';
		}
		for (int j = 0; j < 2*i+1; j++) {
			std::cout << '*';
		}
		for (int j = 0; j < N - i; j++) {
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return 0;
}
