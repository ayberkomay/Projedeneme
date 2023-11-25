#include "insertion.h"
#include <algorithm>
#include <vector>

std::vector<int>isort(std::vector<int>unsarray)
{
    for (size_t f=0; f+1<=unsarray.size();f++)
    {
        int s=f+1;
        while(unsarray[f]>unsarray[s]&&f<unsarray.size())
        {
            std::swap(unsarray[f],unsarray[s]);
            f--;
            s--;
        }
    }
    return unsarray;
}

