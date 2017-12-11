// remove elements.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator> 
#include <list>

using namespace std;
class Solution 
{
	public:
	int removeElement(int A[], int n, int elem)
	{
		//return distance(A, remove(A, A+n, elem));
		return distance(A,  A+n);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{

	return 0;
}

