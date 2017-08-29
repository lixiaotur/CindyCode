// median of two arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <vector>
using namespace std;

class Solution
{
	public:
		int findBalanceIndex(int A[], int m) 
		{
			if( m%2==0 || m<2)
				return -1;
			int sum = Sum(A, m);
			printf("sum is %d",sum);
			int index =1;
			int leftsum =A[0];
			while(1)
			{
				if(index>m-2 || leftsum >= sum/2)
				{
					return -1;
				}

				else if((sum-A[index])%2==0 &&leftsum ==(sum-A[index])/2)
				{
					return index;
				}

				else
				{
					leftsum = leftsum + A[index];
					index++;
				}

			}
		}
	private:
		int Sum(int A[], int m)
		{
			int sum=0;
			for(int i=0;i<m;i++)
			{
				sum =sum+A[i];;
			}
			return sum;

		}
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a[7]={2,8,2,1,3,4,2};
	Solution solution;
	int index = solution.findBalanceIndex(a,7);
	printf("index =%d",index);
	return 0;
}

