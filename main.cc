#include <iostream>
#include <vector>
#include <chrono>//for calculating time
#include <fstream>//for output file
#include <random>//for random number generator
#include "insertion.h"//insertion sort
#include "heap.h"//heap sort
#include "radix.h"//radix sort
#include "quick.h"//quick sort
#include "hybrid.h"//hybrid sort

std::vector<int> randomNumber(int size)
{
    std::random_device ranD;//for the better random number
    std::mt19937 mt(ranD());//it's engine

    std::vector<int> gRand(size);
    for (int i=0;i<size;i++)
        gRand[i]=mt()%(size*10);

    return gRand;
}

int main()
{
    std::vector<int> sizes;
    for(size_t y=1; y<10000; y*=10)
    {
        for(size_t x=1; x<=10; x++)
        {
            int size=x*y;
            sizes.push_back(size);
        }
    }

    std::ofstream file("outputfile.txt");//save the results in file

    for(int size:sizes)
    {
        std::cout<<"Vector size: "<<size<<"\n";//shows vector size
        std::vector<int>unsarray=randomNumber(size);
        file<<"Vector size: "<<size<<"\n";//add the vector size in file.

        //sorting and calculating the time parts for every sorts then saves in outputfile.txt
        auto start=std::chrono::high_resolution_clock::now();
        isort(unsarray);
        auto end=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double,std::milli>result=end-start;
        std::cout<<"Insertion sort time for size "<<result.count()<<" ms\n";
        file<<"Insertion sort time for size "<<result.count()<<" ms\n";

        auto start2=std::chrono::high_resolution_clock::now();
        qsort(unsarray);
        auto end2=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double,std::milli>result2=end2-start2;
        std::cout<<"Quick sort time for size "<<result2.count()<<" ms\n";
        file<<"Quick sort time for size "<<result2.count()<<" ms\n";
        auto start3=std::chrono::high_resolution_clock::now();
        rsort(unsarray);

        auto end3=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double,std::milli>result3=end3-start3;
        std::cout<<"Radix sort time for size "<<result3.count()<<" ms\n";
        file<<"Radix sort time for size "<<result3.count()<<" ms\n";

        auto start4=std::chrono::high_resolution_clock::now();
        hsort(unsarray);
        auto end4=std::chrono::high_resolution_clock::now();
        std::chrono::duration<double,std::milli>result4=end4-start4;
        std::cout<<"Heap sort time for size "<<result4.count()<<" ms\n";
        file<<"Heap sort time for size "<<result4.count()<<" ms\n";

        file<<"\n\n";
    }
    file.close();
    return 0;
}
