#include <iostream>
#include "Header_3.h"
#include <vector>

int main()
{
	std::vector<int> vec{ 4, 1, 3, 6, 25, 54 };
	std::cout <<"[IN]: ";
	for (auto i : vec) { std::cout << i << " "; };
	std::cout << std::endl;
	Counter counter;
	for (auto i : vec)
	{
		counter(i);
	}
	std::cout << "[OUT]: get_sum() = " << counter.get_sum()<< '\n';
	std::cout << "[OUT]: get_count() = " << counter.get_count();
	
	return EXIT_SUCCESS;
}
