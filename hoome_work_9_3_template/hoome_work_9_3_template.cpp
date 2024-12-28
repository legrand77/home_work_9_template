#include <iostream>
#include "Header_3.h"
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec{ 4, 1, 3, 6, 25, 54 };
	std::cout <<"[IN]: ";
	for (auto i : vec) { std::cout << i << " "; };
	std::cout << std::endl;
	std::for_each(vec.begin(), vec.end(), get_sum());
	std::cout << std::endl;
	std::for_each(vec.begin(), vec.end(), get_count());
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
