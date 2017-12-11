// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class Singleton
{
public:
	static Singleton* getInstance()
	{
		if (pInst == NULL)
		{
			pInst = new Singleton();
		}
		return pInst;
	}
private:
	static Singleton* pInst;
};

Singleton* Singleton::pInst = NULL;

int main()
{
	Singleton* pInstance1 = Singleton::getInstance();
	Singleton* pInstance2 = Singleton::getInstance();
    return 0;
}

