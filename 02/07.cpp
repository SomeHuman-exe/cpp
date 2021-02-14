#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<string>

int main() {
	int a, b, m, c;
	c = 0;
	std::string str = "x = ";
	std::cin >> a >> b >> m;
	for (int i = 0; i <= m; i++) {
		if ((a * i) % m == b) {
			str = str + std::to_string(i) + "; ";
			c++;
		}
	}
	if (c == 0) {
		std::cout << "There are no solutions to " << a << " * x = " << b << " mod " << m;
	}
	else {
		std::cout << "Solutions to " << a << " * x = " << b << " mod " << m << " are:" << std::endl << str;
	}

	return 0;
}
