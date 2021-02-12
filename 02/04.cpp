#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string>

int main() {
	int N;
	int number_of_primes = 0;
	int not_prime = 0;
	int number_to_check = 2;
	int answer;
	std::string str;
	std::cin >> N;
	while (number_of_primes <= N) {
		for (int running_number = 2; running_number < number_to_check; running_number++) {
			if (number_to_check % running_number == 0) {
				not_prime++;
				//std::cout << number_to_check << ' ' << running_number << std::endl; //debug line
			}
		}
		if (not_prime == 0) {
			str = str + std::to_string(number_to_check) + ' '; //string with primes
			number_of_primes++;
		}
		number_to_check++;
		not_prime = 0;
		//std::cout << number_of_primes << ' ' << number_to_check << std::endl; //debug line
		if (number_of_primes == N-1) {
			answer = number_to_check;
		}
	}
//	std::cout << str;    //N first primes
	std::cout << answer;
	return 0;
