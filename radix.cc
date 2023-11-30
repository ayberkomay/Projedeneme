#include "radix.h"
#include <algorithm>
#include <vector>

std::vector<int>rsort(std::vector<int>&unsarray)
{
    size_t us=unsarray.size();
    int largest=*std::max_element(unsarray.begin(),unsarray.end()); //finding largest element. it can also write by for loop

    int place=1;
    for(int nothing=largest; nothing>=10; nothing/=10)
        place*=10;//find the value of bigger number's place value

    int add=1;
    while(add<place*10)
    {
        for(size_t first=0; first<us; first++)
        {
            for(size_t second=first+1; second<us; second++)
            {//compare and swap
                if((unsarray[first]/add)%10>(unsarray[second]/add)%10)
                    std::swap(unsarray[first],unsarray[second]);
            }
        }
        add*=10;//change the checking method
    }
    return unsarray;
}
