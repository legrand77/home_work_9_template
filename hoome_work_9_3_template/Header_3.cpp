#include <iostream>
#include "Header_3.h"	



 void Counter::operator()(int num)

 {

	if (num % 3 == 0)
	{
		sum+=num;
		count++;
	}

}
  int Counter::get_sum() const
  {
	return sum;
   }

 int Counter::get_count() const
{	
	return count;
}

