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
	int max = int(str[0])-int('0');
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if ((int(str[i]) - int('0')) > max) {
			max = int(str[i]) - '0';
		}
	}
	for (int i = 1; i <= str.find('0') - 1; i++) {
		if ((int(str[i]) - int('0')) == max) {
			count++;
		}
	}
	std::cout << str << "; maximum is " << max << "; number of maximums is " << count;
	return 0;
}
