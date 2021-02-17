/*
* chap03-float.c
* 실수 자료형 : float, double
* -----------------------------------
* float : 4 byte, 1.2E-38 ~ 3.4E38
* double : 8 byte, 2.2E-308 ~ 1.8E308 
* -----------------------------------
* IEEE754 
100.0 : 0.1e2
*/
#include <stdio.h>

void main()
{
	double dpi = 3.123456789; // 14자리
	float pi = 3.123456f; // 6자리
	float t1 = 0.123e3;

	printf("pi(%.10f)(%.10f)(%f)(%e)\n", pi, dpi, t1, t1);
}