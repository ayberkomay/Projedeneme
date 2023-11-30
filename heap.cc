#include "heap.h"
#include <algorithm>
#include <vector>

void heap(std::vector<int> &unsarray,size_t first, size_t usSec)
{
    while(first*2+1<=usSec)
    {
        size_t second=first*2+1;
        size_t third=second+1;
        size_t largest=first;

        //compare the second (left) number with largest
        if (second<=usSec&&unsarray[second]>unsarray[largest])
            largest=second;
        //compare the third (right) number with largest
        if (third<=usSec&&unsarray[third]>unsarray[largest])
            largest=third;

        //if largest element not the current one, swap
        if(largest!=first)
        {
            std::swap(unsarray[first], unsarray[largest]);
            first=largest;
        }
        else
            return;//if satisfied, exit
    }
}

std::vector<int>hsort(std::vector<int>&unsarray)
{
    size_t us=unsarray.size();

    int maxf=us/2-1;
    int minf=us-1;

    while(maxf>=0)
    {//build a heap
        heap(unsarray,maxf,us-1);
        maxf--;
    }
    while(minf>0)
    {//swap the numbers with bigger heaps.
        std::swap(unsarray[0],unsarray[minf]);
        heap(unsarray,0,minf-1);//heap again with which is not bigger
        minf--;
    }

    return unsarray;
}

