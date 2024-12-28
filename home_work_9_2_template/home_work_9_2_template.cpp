#include <iostream>
#include "Header_2.h"

int main()

{
	auto test = Table<int>(3, 4);
	test[0][1] = 4;
	test[0][3] = 5;
	test[2][3] = 12;
	std::cout << test[0][1]<<"  "<< test[0][3] << "  " << test[2][3]<< std::endl;
	test.Size();
	return EXIT_SUCCESS;
}
