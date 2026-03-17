#include <iostream>
#include <fstream>

int main() {
	std::string filename = "test";
	std::ifstream file(filename, std::ios::binary);
		if (!file)
			return 1;

		char c;

		while (file.get(c)) {
			std::cout << c;

		};
};
