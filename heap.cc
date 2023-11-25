#include "heap.h"
#include <algorithm>
#include <vector>


std::vector<int>hsort(std::vector<int>unsarray)
{

    size_t us=unsarray.size();
    int maxf;
    maxf=us/2;
    bool swapped;
    do
    {
        swapped =false;
        for (size_t f=0; f<=us; f++)
        {
            int s=f+f+1;
            int t=f+f+2;

            size_t largest=std::max(unsarray[t],unsarray[s]);
            if(unsarray[f]!=largest && s<us && t<us)
            {
                std::swap(unsarray[f],unsarray[largest]);
                swapped =true;
                if(f=us)
                {
                    swapped=false;
                }
            }
        }
    }
    while(swapped);

    return unsarray;
}

/*
#include "heap.h"
#include <algorithm>
#include <vector>

void heapsort(std::vector<int> &arr, int us, int f)
{
    heapsort(arr,us,f)
}

std::vector<int>hsort(std::vector<int>unsarray)
{
    size_t us=unsarray.size();
    int maxf;
    maxf<=us/2;
    for (size_t f=0; f<=maxf; f++)
    {
        int s=f+f+1;
        int t=f+f+2;

        int largest=std::max(unsarray[t],unsarray[s]);
            if(unsarray[f]<largest)
            {
                std::swap(unsarray[f],unsarray[largest]);
            }
    }
    return unsarray;
}

*/
