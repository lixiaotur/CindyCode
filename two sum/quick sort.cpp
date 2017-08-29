#include "StdAfx.h"

void Qsort(int a[], int low, int high)
{
    if(low >= high)
    {
        return;
    }
    int first = low;
    int last = high;
    int key = a[first];/*用字表的第一个记录作为枢轴*/
 
    while(first < last)
    {
        while(first < last && a[last] >= key)
        {
            --last;
        }
 
        a[first] = a[last];/*将比第一个小的移到低端*/

 
        while(first < last && a[first] <= key)
        {
            ++first;
        }
         
        a[last] = a[first];    
        /*将比第一个大的移到高端*/

    }
    a[first] = key;/*枢轴记录到位*/

		 for(int i = 0; i <= high; i++)
		{
			printf("%d   ",a[i]);
		}
		printf("\n");
	printf("\n key =%d low =%d, first =%d, last=%d \n",key,low,first,last);
    Qsort(a, low, first-1);
    Qsort(a, first+1, high);
}
int main()
{
    int a[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
 
    Qsort(a, 0, sizeof(a) / sizeof(a[0]) - 1);/*这里原文第三个参数要减1否则内存越界*/
 
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d   ",a[i]);
    }
     
    return 0;
}


