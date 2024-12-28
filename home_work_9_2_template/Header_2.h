#pragma once
template <class T>
class Table
{
public:
	Table(int elements_a, int elements_b) : elements(new T* [elements_a]), a(elements_a), b(elements_b)

	{
		for (int i = 0; i < a; ++i)
		{
			elements[i] = new T[b];
		}
	}
    
 
	~Table()
	{
		for (int i = 0; i < a; ++i)
		{
			delete[] elements[i];
		}

		delete[] elements;
	}
	
	int* operator[](int i)
	{
		return elements[i];
	}

	int* operator[](int i) const
	{
		return elements[i];
	}
	void Size()
	{
		std::cout << a << " x " << b << std::endl;

	}

private:
	T** elements = nullptr;
	int a = 0;
	int b = 0;
};


