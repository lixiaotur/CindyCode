// median of two arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
class Solution
{
	public:
		double findMedianSortedArrays(int A[], int m, int B[], int n) 
		{
			int total = m + n;
			if (total & 0x1)
				return find_kth(A, m, B, n, total / 2 + 1);
			else
				return (find_kth(A, m, B, n, total / 2)
			+ find_kth(A, m, B, n, total / 2 + 1)) / 2;
		}
	private:
		static double find_kth(int A[], int m, int B[], int n, int k)
		{
			//always assume that m is equal or smaller than n
			if (m > n) 
				return find_kth(B, n, A, m, k);
			if (m == 0) 
				return B[k - 1];
			if (k == 1) 
				return min(A[0], B[0]);
			//divide k into two parts
			int pa = min(k / 2, m), pb = k - pa;
			if (A[pa - 1] < B[pb - 1])
				return find_kth(A + pa, m - pa, B, n, k - pa);
			else if (A[pa - 1] > B[pb - 1])
				return find_kth(A, m, B + pb, n - pb, k - pb);
			else
				return A[pa - 1];
			}
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a[2]={1,3};
	int b[5]={2,4,6,8,10};
	Solution A;
	int median = A.findMedianSortedArrays(a,2,b,5);
	printf("median=%d",median);
	return 0;
}

