#include "insertion.h"
#include <algorithm>
#include <vector>

std::vector<int>isort(std::vector<int>&unsarray)
{//size_t for positive integers
    size_t us=unsarray.size();
    for (size_t first=0; first+1<us; first++)
    {
        size_t second=first+1;
        while(unsarray[first]>unsarray[second]&&second>=1)
        {//first element with second element swap if necessary
            std::swap(unsarray[first],unsarray[second]);
            if(first!=0)
            {//move back
                first--;
                second--;
            }
        }
    }

   return unsarray;
}
