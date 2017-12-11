// palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <ctype.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution
{
public:
	bool isPalindrome(string str)
	{
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		auto left = str.begin();
		auto right = prev(str.end()); //prev Get iterator to previous element
		while (left < right)
		{
			if (!isalnum(*left))
				left++;
			else if (!isalnum(*right))
				right--;
			else if (*left != *right)
				return false;
			else
			{
				left++;
				right--;
			}
		}
		return true;
	}
};

int main()
{
	string strA = "A man, a plan, a canal : Panama";
	string strB = "race a car";
	Solution s;
	cout << "strA " << ( s.isPalindrome(strA) ? "is " : "is not " ) << "palindrome" << endl;
	cout << "strB " << ( s.isPalindrome(strB) ? "is " : "is not " ) << "palindrome" << endl;

    return 0;
}

