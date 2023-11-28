#include "insertion.h"
#include <algorithm>
#include <vector>
#include <chrono>
//use clock
std::vector<int>isort(std::vector<int>&unsarray)
{   //size_t for positive integers
    size_t us=unsarray.size();
    for (size_t first=0; first+1<us; first++)//maybe first<us is enough??? i'll check
    {//first=0 true?
        size_t second=first+1;
        while(unsarray[first]>unsarray[second]&&second>=1)//i'll try to delete or add last if loop second>=1 later.
        {
            std::swap(unsarray[first],unsarray[second]);
            if(first!=0)
            {
                first--;
                second--;
            }
        }
    }

   return unsarray;
}
// maybe for first and second values i could write extra variables. because after first--, second-- part it starts to check at the beginning
// i could write this code with just one variable, also i could add the count for x-- times, after last if loop i can use them for x++
//or first-- can be before swap
