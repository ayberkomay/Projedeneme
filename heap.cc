#include "heap.h"
#include <algorithm>
#include <vector>
#include <chrono>
//use clock

//UPDATED. IT WORKS
void heap(std::vector<int> &unsarray,size_t first, size_t usSec)
{
    while(first*2+1<=usSec)
    {
        size_t second=first*2+1;
        size_t third=second+1;
        size_t largest=first;
        //following 2 if for finding the largest number between the second and third numbers.
        if (second<=usSec&&unsarray[second]>unsarray[largest])
        {
            largest=second;
        }
        if (third<=usSec&&unsarray[third]>unsarray[largest])
        {
            largest=third;
        }

        if(largest!=first)
        {
            std::swap(unsarray[first], unsarray[largest]);
            first=largest;
        }
        else
        {
            return;
        }
    }
}

std::vector<int>hsort(std::vector<int>&unsarray)
{
    size_t us=unsarray.size();

    int maxf=us/2-1;
    int minf=us-1;

    while(maxf>=0)
    {
        heap(unsarray,maxf,us-1);
        maxf--;
    }
    while(minf>0)
    {
        std::swap(unsarray[0],unsarray[minf]);
        heap(unsarray,0,minf-1);
        minf--;
    }

    return unsarray;
}

