// HW 1-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int f;
	double c;

	printf("Fahrenheit \t Celsius \n");

	for (f=12; f<=212;f=f+10)
	{
		c = (f-32)*(5.0/9.0);
		printf("%d\t\t %G\n",f,c);
	}


	return 0;
}

