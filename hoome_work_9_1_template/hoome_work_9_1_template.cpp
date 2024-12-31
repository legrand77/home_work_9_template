#include <iostream>
#include<vector>
#include "Header_1.h"
int main()
{    
	int a{4};
	std::vector<int> vec{-1, 4, 8 };

    std::cout << "[IN]: " << a << std::endl;
	std::cout << "[OUT]: " << my_square(a) << std::endl;
	std::cout << "[IN]: "; for (auto i : vec) { std::cout << i << ", "; };std::cout << '\b' << '\b' << " " << std::endl;
	std::cout << "[OUT]: "; for (auto i : my_square(vec)) { std::cout << i << ", "; };std::cout << '\b' << '\b' << " " << std::endl;
	
}









