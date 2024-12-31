#include <iostream>
#include "Header_2.h"

int main()

{
    Table<int> test(3, 4);
	test[0][1] = 4;
	test[0][3] = 5;
	test[2][3] = 12;
	std::cout << test[0][1]<<"  "<< test[0][3] << "  " << test[2][3]<< std::endl;
	std::cout << test.Size() << std::endl;

	Table<int> t4(2, 3);
	Table<int> t2(2, 3);

	t2[0][1] = 20;
	t2[0][2] = 51;
	t2[1][2] = 122;

	t4 = t2;

	std::cout << t4[0][1] << "  " << t4[0][2] << "  " << t4[1][2] << std::endl;
	std::cout << t4.Size() << std::endl;
	Table<double> t1(2, 3);
	t1[0][1] = 10;
	t1[0][2] = 7;
	t1[1][2] = 15;
	Table<double> t3(t1);

	std::cout << t3[0][1] << "  " << t3[0][2] << "  " << t3[1][2] << std::endl;
	std::cout << t3.Size() << std::endl;
	return EXIT_SUCCESS;
}
