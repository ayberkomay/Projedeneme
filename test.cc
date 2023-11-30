/* it's the old version of my sort algorithms test file. please open main.cc for try to code
#include <iostream>
#include <vector>
#include <algorithm>
#include "insertion.h"
#include "heap.h"
#include "radix.h"
#include "quick.h"

int main()
{
    std::vector<int>numbers= {3,7,1,8,2,9,10,5,2,6,4,3,1};
    std::vector<int>realnumbers= {1,1,2,2,3,3,4,5,6,7,8,9,10};
    numbers=isort(numbers);
    if(numbers==realnumbers)
        std::cout<<"1 True"<<std::endl;
    else
        std::cout<<"1 False"<<std::endl;

    std::vector<int>numbers2= {8,5,7,4,0,2,3,1,9};
    std::vector<int>realnumbers2= {0,1,2,3,4,5,7,8,9};
    numbers2=hsort(numbers2);
    if(numbers2==realnumbers2)
        std::cout<<"2 True"<<std::endl;
    else
        std::cout<<"2 False"<<std::endl;

    std::vector<int>numbers3= {5,123,17,799,548,2,73,8,42};
    std::vector<int>realnumbers3= {2,5,8,17,42,73,123,548,799};
    numbers3=rsort(numbers3);
    if(numbers3==realnumbers3)
        std::cout<<"3 True"<<std::endl;
    else
        std::cout<<"3 False"<<std::endl;

    std::vector<int>numbers4= {3,7,1,8,2,9,10,5,2,6,4,3,1};
    std::vector<int>realnumbers4= {1,1,2,2,3,3,4,5,6,7,8,9,10};
    numbers4=qsort(numbers4);
    if(numbers4==realnumbers4)
        std::cout<<"4 True"<<std::endl;
    else
        std::cout<<"4 False"<<std::endl;
}
*/
