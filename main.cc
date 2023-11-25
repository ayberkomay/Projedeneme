#include <iostream>
#include <vector>
#include "insertion.h"

int main()
{
	std::vector<int>numbers={3,7,1,8,2,9,10,5,2,6,4,3,1};
	std::vector<int>realnumbers={1,1,2,2,3,3,4,5,6,7,8,9,10};
	numbers=isort(numbers);
	if(numbers==realnumbers)
        std::cout<<"True"<<std::endl;
    else
        std::cout<<"False"<<std::endl;
}
