#pragma once

struct Counter
{
private:
	int sum{};
	int count{};
public:
	void operator()(int num);
	int get_sum() const;
	int get_count() const;
};


