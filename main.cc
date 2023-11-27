#include <iostream>
#include <vector>
#include "insertion.h"
#include "heap.h"

int main()
{
    std::vector<int>numbers= {3,7,1,8,2,9,10,5,2,6,4,3,1};
    std::vector<int>realnumbers= {1,1,2,2,3,3,4,5,6,7,8,9,10};
    numbers=isort(numbers);
    if(numbers==realnumbers)
        std::cout<<"1 True"<<std::endl;
    else
        std::cout<<"1 False"<<std::endl;

    std::vector<int>numbers2= {8,5,7,4,0,2,3,1,9};//7,1,8,5,0,9,3,2,4
    std::vector<int>realnumbers2= {0,1,2,3,4,5,7,8,9};//9,5,8,4,0,7,3,2,1
    numbers2=hsort(numbers2);
    if(numbers2==realnumbers2)
        std::cout<<"2 True"<<std::endl;
    else
        std::cout<<"2 False"<<std::endl;
}
