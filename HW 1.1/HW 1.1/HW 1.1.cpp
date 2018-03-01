// HW 1.1.cpp : Defines the entry point for the console application.
//Programmer : Jui-Wen, Yeh
// 2018.03.01

#include "stdafx.h"
#include "math.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//numbers
	double x1, x2, x3, y1, y2, y3, z1, z2, z3;
	double a, b, c, area, s, alpha, beta, gamma;
	
	//
	const double pi = 3.1415926;

	x1=0;x2=100;x3=0;
	y1=0,y2=50;y3=200;
	z1=0,z2=0;z3=100;

	//position
	printf("Triangle points :  (%G,%G,%G), (%G,%G,%G), (%G,%G,%G)", 
		x1, y1, z1,x2, y2, z2, x3, y3, z3);
	
	//length
	a=sqrt(pow(x2-x3,2)+pow(y2-y3,2)+pow(z2-z3,2));
	b=sqrt(pow(x3-x1,2)+pow(y3-y1,2)+pow(z3-z1,2));
	c=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
	printf("\n");
	printf("length a = %G, ",a);
	printf("length b = %G, ",b);
	printf("length c = %G ",c);
	printf("\n");

	//area 
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area = %G", area);
	printf("\n");

	//angle of degree
	alpha= (acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c))/pi*180);
	beta = (acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c))/pi*180);
	gamma = (acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a))/pi*180);
	printf("angles in degree : alpha = %G, beta = %G, Gamma = %G", 
		alpha, beta, gamma);
	printf("\n");
	printf("Sum of angles = %G", alpha+beta+gamma);
	printf("\n");
	return 0;
}

