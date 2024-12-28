#pragma once

template <class T>
void my_square(T a, T b, T c) 
{
	std::cout << "[IN]: "<< a << ", " << b << ", " << c << std::endl;
	std::cout <<"[OUT]: " << (a*a) << ", " << (b*b) << ", " << (c*c) << std::endl;
}

template <class T>
void my_square(T a)
{
	std::cout << "[IN]: " << a <<  std::endl;
	std::cout << "[OUT]: " << (a * a)  << std::endl;
}
