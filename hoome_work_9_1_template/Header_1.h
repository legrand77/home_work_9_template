#pragma once
#include<vector>
#include <iostream>


template <class T>
std::vector<T> my_square(std::vector<T> vec)
{
	for (int i=0; i<vec.size(); i++)
	{
		vec[i]*=vec[i];
	}
	return vec;
}

template <class T>
T my_square(T a)
{
	a*=a;
	return a;
}