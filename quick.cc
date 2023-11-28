#include "quick.h"
#include <algorithm>
#include <vector>
#include <chrono>
//use clock
//Hoare partitioning scheme from website
// it works
void quicksort(std::vector<int>&unsarray, size_t first, size_t second)
{

    size_t pivot=first;
    size_t left=pivot+1;
    size_t right=second;

    if(first<second)

    {
        while(left<right)
        {
            while(left<=right&&unsarray[left]<unsarray[pivot])
                left++;
            while(left<=right&&unsarray[right]>unsarray[pivot])
                right--;
            if (left<=right&&unsarray[left]>unsarray[right])
                std::swap(unsarray[left], unsarray[right]);
        }
        while(right>first&&unsarray[right]>=unsarray[pivot])
            right--;

        std::swap(unsarray[right],unsarray[pivot]);

        if(right>first)
            quicksort(unsarray,first,right-1);
        quicksort(unsarray,right+1,second);
    }
}
std::vector<int>qsort(std::vector<int>&unsarray)
{
    size_t us=unsarray.size();

    quicksort(unsarray,0,us-1);

    return unsarray;
}
