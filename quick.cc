#include "quick.h"
#include <algorithm>
#include <vector>
#include <chrono>
//use clock
//Hoare partitioning scheme from website
void quicksort(std::vector<int>&unsarray)
{

}
//I couldn't write good in short time. I'll update at all.
std::vector<int>qsort(std::vector<int>&unsarray)
{
    size_t us=unsarray.size();

    int pivot=0;
    int left=1;
    int right=us-1;
    int pArr=unsarray[pivot];
    int lArr=unsarray[left];
    int rArr=unsarray[right];


    const int sLeft=left; //for continue
    const int sRight=right;
    while(true)
    {
        if(lArr<pArr&&!(lArr>rArr))
        {
            if(lArr>rArr)
            {
                std::swap(lArr,rArr);
                left=sLeft;
                right=sRight;
            }
            left++;
        }
        else
        {
            std::swap(lArr,rArr);
            left=sLeft;
            right=sRight;
            right--;
        }
        if(right>left)
        {
            std::swap(lArr,pArr);
            break;
        }
    }

    return unsarray;
}
