#include "quick.h"
#include <algorithm>
#include <vector>

//Hoare partitioning scheme from website
//in my last update radix was working for 0-99 but not 100+
void quick(std::vector<int>&unsarray, size_t first, size_t second)
{
    if(first>=second)
        return; //for exit, for the 0 or 1 element it's already sorted

    size_t pivot=first;
    size_t left=pivot+1;
    size_t right=second;

    while(left<=right)
    {//find an element bigger than the pivot on the left
        while(left<=right&&unsarray[left]<=unsarray[pivot])
            left++;
        //find an element smaller than the pivot on the right
        while(left<=right&&unsarray[right]>=unsarray[pivot])
            right--;
        if(left<right&&unsarray[left]>unsarray[right])
        {//if elements ok, swap
            std::swap(unsarray[left], unsarray[right]);
            left++;
            right--;
        }
    }//swap pivot with the right element
    std::swap(unsarray[right], unsarray[pivot]);

    if(right>0)// repeat, sort the sub the left and right of the pivot
        quick(unsarray,first,right-1);
    quick(unsarray,right+1,second);
}

std::vector<int>qsort(std::vector<int>&unsarray)//i got an error about qsort in main.cc when it calling. that's why i updated.
{
    size_t us=unsarray.size();

    quick(unsarray,0,us-1);//call the function

    return unsarray;
}
