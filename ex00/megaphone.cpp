#include <iostream>
#include <string>
 
int main(int argc, char *argv[]) {
	if (argc != 1) {
		int i = 1;
		const uint diff = 'a' - 'A';
		while (i < argc) 
		{
			std::string data = argv[i];
			std::string upper;
			upper.reserve(data.length());
			int j = 0;
			for(j = 0; j < int(data.size()); j++){
				upper += (data[j] <= 'z' && data[j] >= 'a') ? data[j] - diff : data[j];
			}
			std::cout << upper;
			if (i < argc - 1)
				std::cout << " ";
			else
				std::cout << std::endl;
			i++;
		}
	}
	else {
		std::string data = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << data << std::endl;
	}	
}
