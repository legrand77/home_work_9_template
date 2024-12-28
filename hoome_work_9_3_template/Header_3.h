#pragma once

class get_sum {
	int m_sum{};
public:
	get_sum() = default;
	void operator()(int a)
	{	
		std::cout << '\r' << "[OUT]: get_sum() = ";
		if (a % 3 == 0) m_sum += a; 
		std::cout << m_sum;    
	}
};

class get_count {
	int m_counter{};
public:
	get_count() = default;
	void operator()(int a) 
	{
		std::cout << '\r' << "[OUT]: get_count() = ";
		a % 3 == 0 ? m_counter++ : m_counter;
		std::cout << m_counter;
	}
};
