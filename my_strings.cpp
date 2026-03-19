#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	std::string filename(argv[1]);
	std::ifstream file(filename, std::ios::binary);
		if (!file)
			return 1;

		char c;

		while (file.get(c)) {
			std::cout << c;
			if   ;

		};
};
