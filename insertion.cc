#include "insertion.h"
#include <algorithm>
#include <vector>

std::vector<int>isort(std::vector<int>unsarray)
{
    const size_t us=unsarray.size();
    for (size_t f=0; f+1<=us;f++)
    {
        int s=f+1;
        while(unsarray[f]>unsarray[s]&&f<us) //f>=0?
        {
            std::swap(unsarray[f],unsarray[s]);
            f--;
            s--;
        }
    }
    return unsarray;
}

