/*
* Project: chap05-funcitons
* Module : chap05-function-01.c
*/
#include <stdio.h>

/*
* 함수선언(declare) : 함수의 프로토타입
*/
void printx(int x);
void print(); 
int sum(int value1, int value2);
int minus(int, int);

void main(void)
{
	printf("main function!\n");
	// print(); // 함수호출
	// printx(10.1f); // 자료소실 발생, 자료형을 일치 시켜야 함
	int result = sum(50, 10); // 호출자(caller)
	printx(result);

	int result_minus = minus(10, 50); 
	printx(result_minus);

	printx(minus(100, 30));

}

/*
* int sum(int, int)
*/
int sum(int value1, int value2)
{
	int result = value1 + value2;
	return result;
}

int minus(int value1, int value2)
{
	int result = value1 - value2;
	return result;

	result = result + 99; // 죽은코드
}

void printx(int x)
{
	printf("printx: result(%d)!\n", x);
}

/*
* 함수정의:본체, 내용이 기술
*/
void print(void)
{
	printf("print function!\n");
}

