// HW 1-3 yes_loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int ii, i;
	for(ii=1;ii<=9;ii++)
	{
		printf("\n");

		for(i=0;i<ii;i++)
		{
			printf("%d",ii);
		}
	}

	return 0;
}

